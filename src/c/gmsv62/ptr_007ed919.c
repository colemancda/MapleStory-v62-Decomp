/* ptr_007ed919 - 0x007ed919 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_007ed919(int param_1,uint param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  if ((param_3 & 0x80000000) == 0) {
    if (param_2 < 0x28) {
      if (param_2 == 0x27) {
        if ((-1 < *(int *)(param_1 + 0x70)) && (*(int *)(param_1 + 0x70) < 2)) {
          *(int *)(param_1 + 0x690) = *(int *)(param_1 + 0x690) + 1;
          if ((*(int *)(param_1 + 0x674) == 0) ||
             (*(uint *)(*(int *)(param_1 + 0x674) + -4) <= *(uint *)(param_1 + 0x690))) {
            *(undefined4 *)(param_1 + 0x690) = 0;
          }
          uVar3 = *(undefined4 *)(param_1 + 0x690);
LAB_007edac7:
          FUN_007ee758(uVar3);
          return;
        }
LAB_007edb10:
        uVar2 = param_3 >> 0x10 & 0xff;
        if (uVar2 == 0x36) {
          uVar2 = 0x2a;
        }
        iVar5 = DAT_00979110 + uVar2 * 4;
        if ((((*(char *)(uVar2 + 4 + iVar5) != '\x05') || (*(int *)(uVar2 + iVar5 + 5) != 0x36)) ||
            (iVar5 = *(int *)(param_1 + 0x70), iVar5 < 0)) || ((1 < iVar5 && (iVar5 != 4))))
        goto LAB_007edc02;
        if (*(int *)(param_1 + 0x98) == 0) {
          if (*(int *)(param_1 + 0x678) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(*(int *)(param_1 + 0x678) + -4);
          }
          if (*(int *)(param_1 + 0x684) != iVar5) {
            if (*(int *)(param_1 + 0x678) == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x678) + -4);
            }
            *(undefined4 *)(param_1 + 0x684) = uVar3;
            return;
          }
        }
      }
      else {
        if (param_2 != 0xd) {
          if (param_2 == 0x1b) {
            if (*(int *)(param_1 + 0x694) != 0) {
              return;
            }
            iVar5 = *(int *)(param_1 + -4);
            uVar3 = 2;
            goto LAB_007eda81;
          }
          if (param_2 == 0x25) {
            if ((-1 < *(int *)(param_1 + 0x70)) && (*(int *)(param_1 + 0x70) < 2)) {
              piVar1 = (int *)(param_1 + 0x690);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 < 0) {
                if (*(int *)(param_1 + 0x674) == 0) {
                  iVar5 = 0;
                }
                else {
                  iVar5 = *(int *)(*(int *)(param_1 + 0x674) + -4);
                }
                *(int *)(param_1 + 0x690) = iVar5 + -1;
              }
              uVar3 = *(undefined4 *)(param_1 + 0x690);
              goto LAB_007edac7;
            }
          }
          else if ((param_2 == 0x26) && (*(int *)(param_1 + 0x70) == 4)) {
            piVar1 = (int *)(param_1 + 0xd8);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 < 0) {
              *(int *)(param_1 + 0xd8) = 0;
            }
            if (*(int *)(param_1 + 0x88) == 0) goto LAB_007edbf7;
            iVar5 = *(int *)(param_1 + 0xd8);
            goto LAB_007edbe6;
          }
          goto LAB_007edb10;
        }
        iVar5 = *(int *)(param_1 + 0x70);
        if (iVar5 != 0) {
          if (iVar5 != 1) {
            if (iVar5 != 4) {
              if (iVar5 == 8) {
                return;
              }
              goto LAB_007edb10;
            }
            *(undefined4 *)(param_1 + 0xd4) =
                 *(undefined4 *)
                  (*(int *)(*(int *)(param_1 + 0xdc) + *(int *)(param_1 + 0xd8) * 4) + 0x28);
            iVar5 = *(int *)(param_1 + -4);
            uVar3 = 1;
            goto LAB_007eda81;
          }
          if (*(int *)(param_1 + 0x694) != 0) {
            return;
          }
        }
        uVar2 = *(uint *)(param_1 + 0x690);
        if (-1 < (int)uVar2) {
          if (*(int *)(param_1 + 0x674) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(uint *)(*(int *)(param_1 + 0x674) + -4);
          }
          if (uVar2 < uVar4) {
            iVar5 = (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 0x674) + 4 + uVar2 * 8) + 4) +
                                0x20))();
            if (iVar5 == 0) {
              return;
            }
            iVar5 = *(int *)(param_1 + -4);
            uVar3 = *(undefined4 *)
                     (*(int *)(*(int *)(param_1 + 0x674) + 4 + *(int *)(param_1 + 0x690) * 8) + 0x14
                     );
            goto LAB_007eda81;
          }
        }
      }
      iVar5 = *(int *)(param_1 + -4);
      uVar3 = 0x2001;
    }
    else {
      if (param_2 == 0x28) {
        if (*(int *)(param_1 + 0x70) == 4) {
          *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
          if ((*(int *)(param_1 + 0xdc) == 0) ||
             (*(uint *)(*(int *)(param_1 + 0xdc) + -4) <= *(uint *)(param_1 + 0xd8))) {
            if (*(int *)(param_1 + 0xdc) == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *(int *)(*(int *)(param_1 + 0xdc) + -4);
            }
            *(int *)(param_1 + 0xd8) = iVar5 + -1;
          }
          if (*(int *)(param_1 + 0x88) == 0) goto LAB_007edbf7;
          iVar5 = *(int *)(param_1 + 0xd8);
LAB_007edbe6:
          FUN_007edc11(*(undefined4 *)(*(int *)(param_1 + 0xdc) + iVar5 * 4));
LAB_007edbf7:
          FUN_008161f1(0);
          return;
        }
        goto LAB_007edb10;
      }
      if (param_2 == 0x4e) {
        if (*(int *)(param_1 + 0x70) != 1) goto LAB_007edb10;
        iVar5 = *(int *)(param_1 + -4);
        uVar3 = 7;
      }
      else {
        if ((param_2 != 0x59) || (*(int *)(param_1 + 0x70) != 1)) goto LAB_007edb10;
        iVar5 = *(int *)(param_1 + -4);
        uVar3 = 6;
      }
    }
LAB_007eda81:
    (**(code **)(iVar5 + 0x34))(uVar3);
  }
  else {
LAB_007edc02:
    FUN_004bc822(param_2,param_3);
  }
  return;
}


