/* FUN_004a88fa - 0x004a88fa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004a88fa(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  uStack_14 = 1;
  uVar1 = param_3 >> 4 & 1;
  if ((param_3 & 0x80000000) == 0) {
    if (param_2 < 0x29) {
      if (param_2 == 0x28) {
        uStack_14 = 5;
        goto LAB_004a896e;
      }
      if (param_2 == 8) {
        uStack_14 = 0;
LAB_004a8962:
        uStack_18 = 0x4a896a;
        FUN_004a952c();
        return;
      }
      if (param_2 == 0x23) {
        if (uVar1 == 0) {
          uStack_14 = 3;
LAB_004a8956:
          uStack_18 = 0x4a895e;
          FUN_004aa24e();
          return;
        }
      }
      else if (param_2 == 0x24) {
        if (uVar1 == 0) {
          uStack_14 = 2;
          goto LAB_004a8956;
        }
      }
      else {
        if (param_2 == 0x25) {
          uStack_14 = 0;
        }
        else if (param_2 == 0x26) {
          uStack_14 = 4;
        }
        else {
          if (param_2 != 0x27) goto LAB_004a8976;
          uStack_14 = 1;
        }
LAB_004a896e:
        uStack_18 = 0x4a8976;
        FUN_004aa24e();
      }
    }
    else if (param_2 == 0x2d) {
      if ((param_3 & 1) != 0) {
        uStack_14 = 0;
        uStack_18 = 0x4a8a31;
        FUN_004a96d4();
        uStack_1c = extraout_ECX_00;
LAB_004a8a3b:
        uStack_14 = 0xffffffff;
        uStack_18 = 0;
        FUN_004a97f4(&uStack_1c);
        FUN_004a92a8();
        goto LAB_004a8a0b;
      }
    }
    else {
      if (param_2 == 0x2e) {
        if ((param_3 & 1) == 0) goto LAB_004a8962;
LAB_004a89f4:
        uStack_14 = 1;
        uStack_18 = 0x4a89ff;
        FUN_004a96d4();
        uStack_14 = 0;
        uStack_18 = 1;
        uStack_1c = 0;
        FUN_004aa5f9();
LAB_004a8a0b:
        uStack_14 = 0x4a8a12;
        FUN_004b3daf();
        return;
      }
      if (param_2 == 0x43) {
        if (uVar1 != 0) {
          uStack_14 = 0x4a89ee;
          FUN_004a9811();
          return;
        }
      }
      else if (param_2 == 0x56) {
        if (uVar1 != 0) {
          uStack_14 = 0;
          uStack_18 = 0x4a89d6;
          FUN_004a96d4();
          uStack_1c = extraout_ECX;
          goto LAB_004a8a3b;
        }
      }
      else if (param_2 == 0x58) {
        if (uVar1 != 0) goto LAB_004a89f4;
      }
      else if ((0x6f < param_2) && (param_2 < 0x7c)) {
        puVar2 = *(undefined4 **)(DAT_009796d4 + 4);
        goto LAB_004a8982;
      }
    }
  }
LAB_004a8976:
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x20) + 4);
LAB_004a8982:
  uStack_14 = param_3;
  uStack_18 = param_2;
  uStack_1c = 0x4a8985;
  (*(code *)*puVar2)();
  return;
}


