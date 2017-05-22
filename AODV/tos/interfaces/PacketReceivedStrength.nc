/*
 * Copyright (c) 2008 Junseok Kim
 * Author: Junseok Kim <jskim@usn.konkuk.ac.kr> <http://usn.konkuk.ac.kr/~jskim>
 * Date: 2008/11/19
 * Version: 0.0.1
 * Published under the terms of the GNU General Public License (GPLv2).
 */

interface PacketReceivedStrength {
  
  command int8_t getStrength( message_t *p_msg );
  
}

