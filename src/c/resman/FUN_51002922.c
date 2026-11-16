/* FUN_51002922 - 0x51002922 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


undefined8 FUN_51002922(uint param_1,ulong param_2,uint *param_3)

{
  ulong uVar1;
  uint *puVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  
  uVar1 = _lrotr(param_2,4);
  uVar5 = (param_1 ^ uVar1) & 0xf0f0f0f;
  uVar8 = param_1 ^ uVar5;
  uVar1 = _lrotr(uVar5 ^ uVar1,0xc);
  uVar5 = (uVar8 ^ uVar1) & 0xffff0000;
  uVar8 = uVar8 ^ uVar5;
  uVar1 = _lrotr(uVar5 ^ uVar1,0x12);
  uVar5 = (uVar8 ^ uVar1) & 0x33333333;
  uVar8 = uVar8 ^ uVar5;
  uVar1 = _lrotr(uVar5 ^ uVar1,0x16);
  uVar5 = (uVar8 ^ uVar1) & 0xff00ff00;
  uVar8 = uVar8 ^ uVar5;
  uVar1 = _lrotr(uVar5 ^ uVar1,9);
  uVar5 = (uVar8 ^ uVar1) & 0x55555555;
  puVar2 = (uint *)_lrotl(uVar5 ^ uVar1,2);
  uVar1 = _lrotl(uVar5 ^ uVar8,1);
  param_1 = 8;
  puVar7 = param_3;
  param_3 = puVar2;
  do {
    uVar5 = *puVar7;
    uVar6 = (uVar5 ^ uVar1) & 0x3f3f3f3f;
    uVar3 = _lrotr(uVar1,4);
    uVar4 = (uVar3 ^ puVar7[1]) & 0x3f3f3f3f;
    uVar8 = puVar7[2];
    puVar2 = puVar7 + 3;
    param_3 = (uint *)((uint)param_3 ^
                      (*(uint *)(&DAT_510070f4 + (uVar4 >> 0x18) * 4) |
                       *(uint *)(&DAT_51006ef4 + (uVar4 >> 0x10 & 0xff) * 4) |
                       *(uint *)(&DAT_51006cf4 + (uVar4 >> 8 & 0xff) * 4) |
                       *(uint *)(&DAT_51006ff4 + (uVar6 >> 0x18) * 4) |
                       *(uint *)(&DAT_51006df4 + (uVar6 >> 0x10 & 0xff) * 4) |
                       *(uint *)(&DAT_51006bf4 + (uVar6 >> 8 & 0xff) * 4) |
                       *(uint *)(&DAT_51006af4 + ((uVar3 ^ puVar7[1]) & 0x3f) * 4) |
                      *(uint *)(&DAT_510069f4 + ((uVar5 ^ uVar1) & 0x3f) * 4)));
    uVar4 = (uVar8 ^ (uint)param_3) & 0x3f3f3f3f;
    uVar3 = _lrotr((ulong)param_3,4);
    uVar5 = (uVar3 ^ *puVar2) & 0x3f3f3f3f;
    puVar7 = puVar7 + 4;
    uVar1 = uVar1 ^ (*(uint *)(&DAT_510070f4 + (uVar5 >> 0x18) * 4) |
                     *(uint *)(&DAT_51006ef4 + (uVar5 >> 0x10 & 0xff) * 4) |
                     *(uint *)(&DAT_51006cf4 + (uVar5 >> 8 & 0xff) * 4) |
                     *(uint *)(&DAT_51006ff4 + (uVar4 >> 0x18) * 4) |
                     *(uint *)(&DAT_51006df4 + (uVar4 >> 0x10 & 0xff) * 4) |
                     *(uint *)(&DAT_51006bf4 + (uVar4 >> 8 & 0xff) * 4) |
                     *(uint *)(&DAT_51006af4 + ((uVar3 ^ *puVar2) & 0x3f) * 4) |
                    *(uint *)(&DAT_510069f4 + ((uVar8 ^ (uint)param_3) & 0x3f) * 4));
    param_1 = param_1 - 1;
  } while (param_1 != 0);
  uVar3 = _lrotr((ulong)param_3,1);
  uVar1 = _lrotr(uVar1,2);
  uVar5 = (uVar1 ^ uVar3) & 0x55555555;
  uVar8 = uVar3 ^ uVar5;
  uVar1 = _lrotl(uVar5 ^ uVar1,9);
  uVar5 = (uVar1 ^ uVar8) & 0xff00ff00;
  uVar8 = uVar8 ^ uVar5;
  uVar1 = _lrotl(uVar5 ^ uVar1,0x16);
  uVar5 = (uVar1 ^ uVar8) & 0x33333333;
  uVar8 = uVar8 ^ uVar5;
  uVar1 = _lrotl(uVar5 ^ uVar1,0x12);
  uVar5 = (uVar1 ^ uVar8) & 0xffff0000;
  uVar8 = uVar8 ^ uVar5;
  uVar1 = _lrotl(uVar5 ^ uVar1,0xc);
  uVar5 = (uVar1 ^ uVar8) & 0xf0f0f0f;
  uVar1 = _lrotl(uVar5 ^ uVar1,4);
  return CONCAT44(uVar1,uVar5 ^ uVar8);
}


