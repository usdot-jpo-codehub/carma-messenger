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
#include "test_utils.h"

TEST_F(MobilityMessageTestSuite, test_encoding){
   //waitForSubscribers(outgoing_mobility_response,1,500);
    cav_msgs::MobilityHeader header;
    cav_msgs::MobilityResponse message;
    //MobilityMessageTestSuite worker;
    
    header.sender_id="USDOT-45100";
    header.recipient_id="USDOT-45095";
    header.sender_bsm_id="10ABCDEF";
    header.plan_id="11111111-2222-3333-AAAA-111111111111";
    header.timestamp = 9223372036854775807;
    message.header=header;
    message.urgency=50;
    message.is_accepted=1;

    outgoing_mobility_response.publish(message);

    ASSERT_FALSE(recv_sys_alert) << "Received system shutdown alert message from cppMessage node.";
    
}

int main (int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    ros::init(argc, argv, "mobility_response_rostest");

    std::thread spinner([] {while (ros::ok()) ros::spin();});

    auto res = RUN_ALL_TESTS();

    ros::shutdown();

    return res;
}