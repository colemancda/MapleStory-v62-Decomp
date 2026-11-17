/* FUN_008749c0 - 0x008749c0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008749c0(uint *param_1,uint param_2,byte *param_3,byte *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar4 = param_1[1];
  uVar7 = *param_1;
  uVar1 = param_2 >> 3;
  if (uVar1 != 0) {
    uVar5 = uVar7 + 1 & 0xff;
    uVar7 = param_1[uVar5 + 2];
    uVar3 = uVar4 + uVar7 & 0xff;
    uVar4 = param_1[uVar3 + 2];
    param_1[uVar5 + 2] = uVar4;
    param_1[uVar3 + 2] = uVar7;
    *param_4 = (byte)param_1[(uVar4 + uVar7 & 0xff) + 2] ^ *param_3;
    uVar5 = uVar5 + 1 & 0xff;
    uVar4 = param_1[uVar5 + 2];
    uVar3 = uVar3 + uVar4 & 0xff;
    uVar7 = param_1[uVar3 + 2];
    param_1[uVar5 + 2] = uVar7;
    param_1[uVar3 + 2] = uVar4;
    param_4[1] = (byte)param_1[(uVar7 + uVar4 & 0xff) + 2] ^ param_3[1];
    uVar5 = uVar5 + 1 & 0xff;
    uVar4 = param_1[uVar5 + 2];
    uVar3 = uVar3 + uVar4 & 0xff;
    uVar7 = param_1[uVar3 + 2];
    param_1[uVar5 + 2] = uVar7;
    param_1[uVar3 + 2] = uVar4;
    param_4[2] = (byte)param_1[(uVar7 + uVar4 & 0xff) + 2] ^ param_3[2];
    uVar5 = uVar5 + 1 & 0xff;
    uVar4 = param_1[uVar5 + 2];
    uVar3 = uVar3 + uVar4 & 0xff;
    uVar7 = param_1[uVar3 + 2];
    param_1[uVar5 + 2] = uVar7;
    param_1[uVar3 + 2] = uVar4;
    param_4[3] = (byte)param_1[(uVar7 + uVar4 & 0xff) + 2] ^ param_3[3];
    uVar5 = uVar5 + 1 & 0xff;
    uVar4 = param_1[uVar5 + 2];
    uVar3 = uVar3 + uVar4 & 0xff;
    uVar7 = param_1[uVar3 + 2];
    param_1[uVar5 + 2] = uVar7;
    param_1[uVar3 + 2] = uVar4;
    param_4[4] = (byte)param_1[(uVar7 + uVar4 & 0xff) + 2] ^ param_3[4];
    uVar5 = uVar5 + 1 & 0xff;
    uVar4 = param_1[uVar5 + 2];
    uVar3 = uVar3 + uVar4 & 0xff;
    uVar7 = param_1[uVar3 + 2];
    param_1[uVar5 + 2] = uVar7;
    param_1[uVar3 + 2] = uVar4;
    param_4[5] = (byte)param_1[(uVar7 + uVar4 & 0xff) + 2] ^ param_3[5];
    uVar6 = uVar5 + 1 & 0xff;
    uVar4 = param_1[uVar6 + 2];
    uVar5 = uVar3 + uVar4 & 0xff;
    uVar7 = param_1[uVar5 + 2];
    param_1[uVar6 + 2] = uVar7;
    param_1[uVar5 + 2] = uVar4;
    param_4[6] = (byte)param_1[(uVar7 + uVar4 & 0xff) + 2] ^ param_3[6];
    uVar7 = uVar6 + 1 & 0xff;
    uVar3 = param_1[uVar7 + 2];
    uVar4 = uVar5 + uVar3 & 0xff;
    uVar5 = param_1[uVar4 + 2];
    param_1[uVar7 + 2] = uVar5;
    param_1[uVar4 + 2] = uVar3;
    param_4[7] = (byte)param_1[(uVar5 + uVar3 & 0xff) + 2] ^ param_3[7];
    while( true ) {
      uVar1 = uVar1 - 1;
      param_3 = param_3 + 8;
      param_4 = param_4 + 8;
      if (uVar1 == 0) break;
      uVar5 = uVar7 + 1 & 0xff;
      uVar7 = param_1[uVar5 + 2];
      uVar3 = uVar4 + uVar7 & 0xff;
      uVar4 = param_1[uVar3 + 2];
      param_1[uVar5 + 2] = uVar4;
      param_1[uVar3 + 2] = uVar7;
      *param_4 = (byte)param_1[(uVar4 + uVar7 & 0xff) + 2] ^ *param_3;
      uVar5 = uVar5 + 1 & 0xff;
      uVar4 = param_1[uVar5 + 2];
      uVar3 = uVar3 + uVar4 & 0xff;
      uVar7 = param_1[uVar3 + 2];
      param_1[uVar5 + 2] = uVar7;
      param_1[uVar3 + 2] = uVar4;
      param_4[1] = (byte)param_1[(uVar7 + uVar4 & 0xff) + 2] ^ param_3[1];
      uVar5 = uVar5 + 1 & 0xff;
      uVar4 = param_1[uVar5 + 2];
      uVar3 = uVar3 + uVar4 & 0xff;
      uVar7 = param_1[uVar3 + 2];
      param_1[uVar5 + 2] = uVar7;
      param_1[uVar3 + 2] = uVar4;
      param_4[2] = (byte)param_1[(uVar7 + uVar4 & 0xff) + 2] ^ param_3[2];
      uVar5 = uVar5 + 1 & 0xff;
      uVar4 = param_1[uVar5 + 2];
      uVar3 = uVar3 + uVar4 & 0xff;
      uVar7 = param_1[uVar3 + 2];
      param_1[uVar5 + 2] = uVar7;
      param_1[uVar3 + 2] = uVar4;
      param_4[3] = (byte)param_1[(uVar7 + uVar4 & 0xff) + 2] ^ param_3[3];
      uVar5 = uVar5 + 1 & 0xff;
      uVar4 = param_1[uVar5 + 2];
      uVar3 = uVar3 + uVar4 & 0xff;
      uVar7 = param_1[uVar3 + 2];
      param_1[uVar5 + 2] = uVar7;
      param_1[uVar3 + 2] = uVar4;
      param_4[4] = (byte)param_1[(uVar7 + uVar4 & 0xff) + 2] ^ param_3[4];
      uVar5 = uVar5 + 1 & 0xff;
      uVar4 = param_1[uVar5 + 2];
      uVar3 = uVar3 + uVar4 & 0xff;
      uVar7 = param_1[uVar3 + 2];
      param_1[uVar5 + 2] = uVar7;
      param_1[uVar3 + 2] = uVar4;
      param_4[5] = (byte)param_1[(uVar7 + uVar4 & 0xff) + 2] ^ param_3[5];
      uVar6 = uVar5 + 1 & 0xff;
      uVar4 = param_1[uVar6 + 2];
      uVar5 = uVar3 + uVar4 & 0xff;
      uVar7 = param_1[uVar5 + 2];
      param_1[uVar6 + 2] = uVar7;
      param_1[uVar5 + 2] = uVar4;
      param_4[6] = (byte)param_1[(uVar7 + uVar4 & 0xff) + 2] ^ param_3[6];
      uVar7 = uVar6 + 1 & 0xff;
      uVar3 = param_1[uVar7 + 2];
      uVar4 = uVar5 + uVar3 & 0xff;
      uVar5 = param_1[uVar4 + 2];
      param_1[uVar7 + 2] = uVar5;
      param_1[uVar4 + 2] = uVar3;
      param_4[7] = (byte)param_1[(uVar5 + uVar3 & 0xff) + 2] ^ param_3[7];
    }
  }
  if ((param_2 & 7) != 0) {
    uVar7 = uVar7 + 1 & 0xff;
    uVar1 = param_1[uVar7 + 2];
    uVar4 = uVar4 + uVar1 & 0xff;
    uVar3 = param_1[uVar4 + 2];
    param_1[uVar7 + 2] = uVar3;
    param_1[uVar4 + 2] = uVar1;
    *param_4 = (byte)param_1[(uVar3 + uVar1 & 0xff) + 2] ^ *param_3;
    for (iVar2 = (param_2 & 7) - 1; iVar2 != 0; iVar2 = iVar2 + -7) {
      uVar7 = uVar7 + 1 & 0xff;
      uVar1 = param_1[uVar7 + 2];
      uVar4 = uVar4 + uVar1 & 0xff;
      uVar3 = param_1[uVar4 + 2];
      param_1[uVar7 + 2] = uVar3;
      param_1[uVar4 + 2] = uVar1;
      param_4[1] = (byte)param_1[(uVar3 + uVar1 & 0xff) + 2] ^ param_3[1];
      if (iVar2 == 1) break;
      uVar7 = uVar7 + 1 & 0xff;
      uVar1 = param_1[uVar7 + 2];
      uVar4 = uVar4 + uVar1 & 0xff;
      uVar3 = param_1[uVar4 + 2];
      param_1[uVar7 + 2] = uVar3;
      param_1[uVar4 + 2] = uVar1;
      param_4[2] = (byte)param_1[(uVar3 + uVar1 & 0xff) + 2] ^ param_3[2];
      if (iVar2 == 2) break;
      uVar7 = uVar7 + 1 & 0xff;
      uVar1 = param_1[uVar7 + 2];
      uVar4 = uVar4 + uVar1 & 0xff;
      uVar3 = param_1[uVar4 + 2];
      param_1[uVar7 + 2] = uVar3;
      param_1[uVar4 + 2] = uVar1;
      param_4[3] = (byte)param_1[(uVar3 + uVar1 & 0xff) + 2] ^ param_3[3];
      if (iVar2 == 3) break;
      uVar7 = uVar7 + 1 & 0xff;
      uVar1 = param_1[uVar7 + 2];
      uVar4 = uVar4 + uVar1 & 0xff;
      uVar3 = param_1[uVar4 + 2];
      param_1[uVar7 + 2] = uVar3;
      param_1[uVar4 + 2] = uVar1;
      param_4[4] = (byte)param_1[(uVar3 + uVar1 & 0xff) + 2] ^ param_3[4];
      if (iVar2 == 4) break;
      uVar7 = uVar7 + 1 & 0xff;
      uVar1 = param_1[uVar7 + 2];
      uVar4 = uVar4 + uVar1 & 0xff;
      uVar3 = param_1[uVar4 + 2];
      param_1[uVar7 + 2] = uVar3;
      param_1[uVar4 + 2] = uVar1;
      param_4[5] = (byte)param_1[(uVar3 + uVar1 & 0xff) + 2] ^ param_3[5];
      if (iVar2 == 5) break;
      uVar7 = uVar7 + 1 & 0xff;
      uVar1 = param_1[uVar7 + 2];
      uVar4 = uVar4 + uVar1 & 0xff;
      uVar3 = param_1[uVar4 + 2];
      param_1[uVar7 + 2] = uVar3;
      param_1[uVar4 + 2] = uVar1;
      param_4[6] = (byte)param_1[(uVar3 + uVar1 & 0xff) + 2] ^ param_3[6];
      param_4 = param_4 + 7;
      param_3 = param_3 + 7;
      if (iVar2 == 6) break;
      uVar7 = uVar7 + 1 & 0xff;
      uVar1 = param_1[uVar7 + 2];
      uVar4 = uVar4 + uVar1 & 0xff;
      uVar3 = param_1[uVar4 + 2];
      param_1[uVar7 + 2] = uVar3;
      param_1[uVar4 + 2] = uVar1;
      *param_4 = (byte)param_1[(uVar3 + uVar1 & 0xff) + 2] ^ *param_3;
    }
  }
  *param_1 = uVar7;
  param_1[1] = uVar4;
  return;
}


