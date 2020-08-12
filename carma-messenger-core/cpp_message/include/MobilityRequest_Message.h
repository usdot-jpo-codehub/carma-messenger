/*
 * Copyright (C) 2020 LEIDOS.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may not
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
#include "cpp_message.h"

namespace cpp_message
{
    class Mobility_Request
    {
        private:
        static const int MOBILITY_REQUEST_TEST_ID_=240;
        static const int STATIC_ID_MAX_LENGTH=16;
        std::string BSM_ID_DEFAULT="00000000";
        const int BSM_ID_LENGTH=BSM_ID_DEFAULT.length();
        std::string STRING_DEFAULT="[]";
        const int TIMESTAMP_LENGTH=std::to_string(INT64_MAX).length();
        std::string GUID_DEFAULT= "00000000-0000-0000-0000-000000000000";
        const int GUID_LENGTH=GUID_DEFAULT.length();

        static const int STRATEGY_MAX_LENGTH=50;
        //Urgency min and max
        static const int URGENCY_MIN=0;
        static const int URGENCY_MAX=1000;
        //Location Range for x and y
        static const long LOCATION_MIN=-638363700;
        static const long LOCATION_MAX=638363700;
        //Location Range for z
        static const long LOCATION_MIN_Z=-636225200;
        static const long LOCATION_MAX_Z=636225200;
        static const int STRATEGY_PARAMS_MAX_LENGTH=1000;
        static const int MAX_POINTS_IN_MESSAGE=60; //The maximum number of points which can be included in a mobility message containing a trajectory over DSRC
        //Trajectory ranges
        static const int OFFSET_MIN=-500;
        static const int OFFSET_MAX=500;
        static const int OFFSET_UNAVAILABLE=501;

        public:
         //helper functions for message decode/encode
        /**
         * @brief Mobility Request message decoding function.
         * @param binary_array Container with binary input.
         * @return decoded ros message, returns null if decoding fails. 
         */         
        boost::optional<cav_msgs::MobilityRequest> decode_mobility_request_message(std::vector<uint8_t>& binary_array);
        /**
         * helper functions for Mobility Request message encoding.
         * @param plainMessage contains mobility request ros message to be encoded as byte array.
         * @return encoded byte array returns null if encoding fails. 
         */
        boost::optional<std::vector<uint8_t>> encode_mobility_request_message(cav_msgs::MobilityRequest plainMessage);
    };
}