/* FUN_00673676 - 0x00673676 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined8 FUN_00673676(uint param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  
  uVar1 = FUN_0087a024(param_2,4);
  uVar5 = (param_1 ^ uVar1) & 0xf0f0f0f;
  param_1 = param_1 ^ uVar5;
  uVar1 = FUN_0087a024(uVar5 ^ uVar1,0xc);
  uVar5 = (param_1 ^ uVar1) & 0xffff0000;
  param_1 = param_1 ^ uVar5;
  uVar1 = FUN_0087a024(uVar5 ^ uVar1,0x12);
  uVar5 = (param_1 ^ uVar1) & 0x33333333;
  param_1 = param_1 ^ uVar5;
  uVar1 = FUN_0087a024(uVar5 ^ uVar1,0x16);
  uVar5 = (param_1 ^ uVar1) & 0xff00ff00;
  param_1 = param_1 ^ uVar5;
  uVar1 = FUN_0087a024(uVar5 ^ uVar1,9);
  uVar5 = (param_1 ^ uVar1) & 0x55555555;
  uVar1 = FUN_0087a35a(uVar5 ^ uVar1,2);
  uVar5 = FUN_0087a35a(uVar5 ^ param_1,1);
  param_1 = 8;
  puVar8 = param_3;
  param_3 = (uint *)uVar1;
  do {
    uVar1 = *puVar8;
    uVar7 = (uVar1 ^ uVar5) & 0x3f3f3f3f;
    uVar2 = FUN_0087a024(uVar5,4);
    uVar3 = (uVar2 ^ puVar8[1]) & 0x3f3f3f3f;
    uVar6 = puVar8[2];
    puVar9 = puVar8 + 3;
    param_3 = (uint *)((uint)param_3 ^
                      (*(uint *)(&DAT_008ee7a8 + (uVar3 >> 0x18) * 4) |
                       *(uint *)(&DAT_008ee5a8 + (uVar3 >> 0x10 & 0xff) * 4) |
                       *(uint *)(&DAT_008ee3a8 + (uVar3 >> 8 & 0xff) * 4) |
                       *(uint *)(&DAT_008ee6a8 + (uVar7 >> 0x18) * 4) |
                       *(uint *)(&DAT_008ee4a8 + (uVar7 >> 0x10 & 0xff) * 4) |
                       *(uint *)(&DAT_008ee2a8 + (uVar7 >> 8 & 0xff) * 4) |
                       *(uint *)(&DAT_008ee1a8 + ((uVar2 ^ puVar8[1]) & 0x3f) * 4) |
                      *(uint *)(&DAT_008ee0a8 + ((uVar1 ^ uVar5) & 0x3f) * 4)));
    uVar3 = (uVar6 ^ (uint)param_3) & 0x3f3f3f3f;
    uVar1 = FUN_0087a024(param_3,4);
    uVar2 = (uVar1 ^ *puVar9) & 0x3f3f3f3f;
    puVar8 = puVar8 + 4;
    uVar5 = uVar5 ^ (*(uint *)(&DAT_008ee7a8 + (uVar2 >> 0x18) * 4) |
                     *(uint *)(&DAT_008ee5a8 + (uVar2 >> 0x10 & 0xff) * 4) |
                     *(uint *)(&DAT_008ee3a8 + (uVar2 >> 8 & 0xff) * 4) |
                     *(uint *)(&DAT_008ee6a8 + (uVar3 >> 0x18) * 4) |
                     *(uint *)(&DAT_008ee4a8 + (uVar3 >> 0x10 & 0xff) * 4) |
                     *(uint *)(&DAT_008ee2a8 + (uVar3 >> 8 & 0xff) * 4) |
                     *(uint *)(&DAT_008ee1a8 + ((uVar1 ^ *puVar9) & 0x3f) * 4) |
                    *(uint *)(&DAT_008ee0a8 + ((uVar6 ^ (uint)param_3) & 0x3f) * 4));
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  uVar1 = FUN_0087a024(param_3,1);
  uVar5 = FUN_0087a024(uVar5,2);
  uVar6 = (uVar5 ^ uVar1) & 0x55555555;
  uVar1 = uVar1 ^ uVar6;
  uVar5 = FUN_0087a35a(uVar6 ^ uVar5,9);
  uVar6 = (uVar5 ^ uVar1) & 0xff00ff00;
  uVar1 = uVar1 ^ uVar6;
  uVar5 = FUN_0087a35a(uVar6 ^ uVar5,0x16);
  uVar6 = (uVar5 ^ uVar1) & 0x33333333;
  uVar1 = uVar1 ^ uVar6;
  uVar5 = FUN_0087a35a(uVar6 ^ uVar5,0x12);
  uVar6 = (uVar5 ^ uVar1) & 0xffff0000;
  uVar1 = uVar1 ^ uVar6;
  uVar5 = FUN_0087a35a(uVar6 ^ uVar5,0xc);
  uVar6 = (uVar5 ^ uVar1) & 0xf0f0f0f;
  uVar4 = FUN_0087a35a(uVar6 ^ uVar5,4);
  return CONCAT44(uVar4,uVar6 ^ uVar1);
}


