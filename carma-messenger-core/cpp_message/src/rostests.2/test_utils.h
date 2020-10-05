/*
 * Copyright (C) 2018-2020 LEIDOS.
 *
 * Licensed under the Apache License, Version 2.0 (the "License") { you may not
 * use this file except in compliance with the License. You may obtain a copy of
 * the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
 * License for the specific language governing permissions and limitations under
 * the License.
 */

#include <gtest/gtest.h>
#include <ros/ros.h>
#include <thread>
#include <chrono>
#include <cav_msgs/ByteArray.h>
#include <cav_msgs/MobilityHeader.h>
#include<cav_msgs/MobilityResponse.h>
#include<cav_msgs/SystemAlert.h>


/**
 * Test fixture for mobility message node testing
 * Maintains publishers, subscribers, and message tracking for all tests.
 * State is reset between tests to ensure clean results.
 */

class MobilityMessageTestSuite :public ::testing::Test
{
    public:
        MobilityMessageTestSuite(){
            _nh=ros::NodeHandle();
            //encoding
            outgoing_mobility_response=_nh.advertise<cav_msgs::MobilityResponse>("outgoing_mobility_response",5);
            binary_msg_sub=_nh.subscribe<cav_msgs::ByteArray>("outbound_binary_msg",100,&MobilityMessageTestSuite::EncodingCallback,this);
            //decoding
            inbound_binary_msg=_nh.advertise<cav_msgs::ByteArray>("inbound_binary_msg",5);
            incoming_mobility_response=_nh.subscribe<cav_msgs::MobilityResponse>("incoming_mobility_response",5, &MobilityMessageTestSuite::Response_Decodingcallback,this);
            sys_alert_sub=_nh.subscribe<cav_msgs::SystemAlert>("system_alert",100,&MobilityMessageTestSuite::sysAlertCallback,this);
        }
        ros::NodeHandle _nh;
        ros::Publisher outgoing_mobility_response;
        ros::Subscriber binary_msg_sub;
        ros::Publisher inbound_binary_msg;
        ros::Subscriber incoming_mobility_response;
        ros::Subscriber sys_alert_sub;
        int msg_count=0;
        int last_points=9999;
        bool shrinking=true;
        bool recv_sys_alert=false;
        cav_msg::ByteArray binary_msg;

        void EncodingCallback(cav_msgs::ByteArray msg){
            //This function checks the outbound binary message being published 
            //In the future DSRC limits should be added here to see if the message will be accepted by the dsrc
            if(msg.messageType=="MobilityResponse"){
                //check value of encoded message
                std::vector<uint8_t> binary_input = {0,241,77,77,90,113,39,212,90,209,171,22,12,38,173,56,147,234,45,104,213,131,150,172,88,65,133,14,36,88,204,88,177,98,197,139,22,43,89,50,100,201,107,54,108,217,173,131,6,12,21,172,88,177,98,197,139,22,44,88,177,98,229,147,38,108,219,178,96,205,179,134,173,27,183,106,225,131,112,202};
                for(int i=0;i<msg.content.size();i++){
                    if(msg.content[i]==binary_input[i]){

                    }
                }

            }
            
        }

        void sysAlertCallback(cav_msgs::SystemAlert msg){
            recv_sys_alert=true;
        }

        cav_msgs::MobilityResponse sample_MobilityResponse(){
            cav_msgs::MobilityHeader header;
            cav_msgs::MobilityResponse message;     
            header.sender_id="USDOT-45100";
            header.recipient_id="USDOT-45095";
            header.sender_bsm_id="10ABCDEF";
            header.plan_id="11111111-2222-3333-AAAA-111111111111";
            header.timestamp = 9223372036854775807;
            message.header=header;
            message.urgency=50;
            message.is_accepted=1;

            return message;
        }

        void Response_Decodingcallback(cav_msgs::MobilityResponse){

        }
};