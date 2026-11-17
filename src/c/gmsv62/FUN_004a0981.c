/* FUN_004a0981 - 0x004a0981 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004a0981(int param_1,uint param_2,uint param_3)

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
    if (param_2 < 0x2e) {
      if (param_2 == 0x2d) {
        if ((param_3 & 1) != 0) {
          uStack_14 = 0;
          uStack_18 = 0x4a0a36;
          FUN_004a1770();
          uStack_1c = extraout_ECX;
LAB_004a0a40:
          uStack_14 = 0xffffffff;
          uStack_18 = 0;
          FUN_004a1890(&uStack_1c);
          FUN_004a1334();
          goto LAB_004a0ae5;
        }
      }
      else {
        if (param_2 == 8) {
          uStack_14 = 0;
          goto LAB_004a0a1c;
        }
        if (param_2 == 0x23) {
          if (uVar1 == 0) {
            uStack_14 = 3;
LAB_004a0a10:
            uStack_18 = 0x4a0a18;
            FUN_004a21dc();
            return;
          }
        }
        else if (param_2 == 0x24) {
          if (uVar1 == 0) {
            uStack_14 = 2;
            goto LAB_004a0a10;
          }
        }
        else {
          if (param_2 == 0x25) {
            uStack_14 = 0;
          }
          else {
            if (param_2 != 0x27) {
              if ((param_2 == 0x28) && (*(int *)(param_1 + 0xb0) != 0)) {
                uStack_14 = param_3;
                uStack_18 = 0x28;
                uStack_1c = 0x4a09dd;
                (*(code *)**(undefined4 **)(*(int *)(param_1 + 0xb0) + 4))();
              }
              goto LAB_004a09dd;
            }
            uStack_14 = 1;
          }
          uStack_18 = 0x4a0a00;
          FUN_004a21dc();
        }
      }
    }
    else {
      if (param_2 == 0x2e) {
        if ((param_3 & 1) == 0) {
LAB_004a0a1c:
          uStack_18 = 0x4a0a24;
          FUN_004a15ce();
          return;
        }
LAB_004a0ace:
        uStack_14 = 1;
        uStack_18 = 0x4a0ad9;
        FUN_004a1770();
        uStack_14 = 0;
        uStack_18 = 1;
        uStack_1c = 0;
        FUN_004a2298();
LAB_004a0ae5:
        uStack_14 = 0x4a0aec;
        FUN_004b3daf();
        return;
      }
      if (param_2 == 0x43) {
        if (uVar1 != 0) {
          uStack_14 = 0x4a0ac5;
          FUN_004a1987();
          return;
        }
      }
      else if (param_2 == 0x56) {
        if (uVar1 != 0) {
          uStack_14 = 0;
          uStack_18 = 0x4a0aa9;
          FUN_004a1770();
          uStack_1c = extraout_ECX_00;
          goto LAB_004a0a40;
        }
      }
      else if (param_2 == 0x58) {
        if (uVar1 != 0) goto LAB_004a0ace;
      }
      else if ((0x6f < param_2) && (param_2 < 0x7c)) {
        puVar2 = *(undefined4 **)(DAT_009796d4 + 4);
        goto LAB_004a09ea;
      }
    }
  }
LAB_004a09dd:
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x20) + 4);
LAB_004a09ea:
  uStack_14 = param_3;
  uStack_18 = param_2;
  uStack_1c = 0x4a09ec;
  (*(code *)*puVar2)();
  return;
}


