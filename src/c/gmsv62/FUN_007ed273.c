/* FUN_007ed273 - 0x007ed273 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007ed273(void)

{
  int iVar1;
  uint uVar2;
  int *extraout_ECX;
  int unaff_EBP;
  int iStack_1c;
  int iStack_18;
  
  FUN_00879bb8();
  iStack_1c = *(int *)(unaff_EBP + 8);
  iStack_18 = iStack_1c;
  if (iStack_1c == 2) {
    iVar1 = *extraout_ECX;
  }
  else {
    iVar1 = extraout_ECX[0x1d];
    if (iVar1 == 0) {
      if ((iStack_1c != 0x2000) && (iStack_1c != 0x2001)) {
        if (iStack_1c == 1) {
          iStack_18 = 0x2001;
          iStack_1c = 0x7ed652;
          (**(code **)(*extraout_ECX + 0x34))();
        }
        goto LAB_007ed623;
      }
LAB_007ed61b:
      iVar1 = *extraout_ECX;
    }
    else {
      if (iVar1 == 1) {
        if ((iStack_1c == 6) || (iStack_1c == 7)) goto LAB_007ed61b;
LAB_007ed344:
        if (iStack_1c != 1) goto LAB_007ed623;
      }
      else {
        if ((iVar1 < 2) || (iVar1 < 4)) goto LAB_007ed344;
        if (iVar1 != 5) {
          if (iVar1 == 6) {
            if (iStack_1c == 1) goto LAB_007ed34c;
            if (iStack_1c == 0x2000) {
              extraout_ECX[0x49] = extraout_ECX[0x49] + -1;
            }
            if (iStack_1c == 0x2001) {
              extraout_ECX[0x49] = extraout_ECX[0x49] + 1;
            }
            if (iStack_1c == 0x2001 || iStack_1c == 0x2000) {
              if (extraout_ECX[0x49] < 0) {
                if (extraout_ECX[0x48] == 0) {
                  iVar1 = 0;
                }
                else {
                  iVar1 = *(int *)(extraout_ECX[0x48] + -4);
                }
                extraout_ECX[0x49] = iVar1 + -1;
              }
              if (extraout_ECX[0x48] == 0) {
                uVar2 = 0;
              }
              else {
                uVar2 = *(uint *)(extraout_ECX[0x48] + -4);
              }
              if (uVar2 <= (uint)extraout_ECX[0x49]) {
                extraout_ECX[0x49] = 0;
              }
              iStack_18 = 0x7ed339;
              FUN_007ec709();
              iStack_18 = 0;
              iStack_1c = 0x7ed341;
              FUN_008161f1();
              goto LAB_007ed341;
            }
          }
          goto LAB_007ed344;
        }
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        if (iStack_1c != 1) {
          if (iStack_1c == 0x2000) {
            extraout_ECX[0x3b] = extraout_ECX[0x3b] + -1;
            *(undefined4 *)(unaff_EBP + -0x10) = 1;
          }
          if (iStack_1c == 0x2001) {
            extraout_ECX[0x3b] = extraout_ECX[0x3b] + 1;
            *(undefined4 *)(unaff_EBP + -0x10) = 1;
          }
          if (iStack_1c == 0x2002) {
            extraout_ECX[0x3c] = 0;
            iStack_18 = 0;
            iStack_1c = 0x7ed39e;
            (**(code **)(*(int *)(extraout_ECX[0x19b] + 4) + 0x24))();
            iStack_1c = extraout_ECX[0x3c];
            (**(code **)(*(int *)(extraout_ECX[0x19b] + 4) + 0x1c))();
            (**(code **)(*(int *)(extraout_ECX[0x19d] + 4) + 0x24))(extraout_ECX[0x3c] == 0);
            (**(code **)(*(int *)(extraout_ECX[0x19d] + 4) + 0x1c))(extraout_ECX[0x3c] == 0);
            iStack_18 = extraout_ECX[0x19b];
            iStack_1c = 0x7ed3f8;
            FUN_004b3b8f();
            iStack_18 = 0x1ad;
            iStack_1c = 0x7ed407;
            iVar1 = FUN_004029b9();
            *(int *)(unaff_EBP + -0x14) = iVar1;
            *(undefined4 *)(unaff_EBP + -4) = 0;
            if (iVar1 == 0) {
              iStack_18 = 0;
            }
            else {
              iStack_18 = 0x7ed418;
              iStack_18 = FUN_0044590d();
            }
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            iStack_1c = 0x7ed42c;
            FUN_007eea09();
            *(undefined4 *)(extraout_ECX[0x43] + 0x11) = *(undefined4 *)(extraout_ECX[0x47] + 0x13);
            *(undefined1 *)(extraout_ECX[0x43] + 0xc) = *(undefined1 *)(extraout_ECX[0x47] + 0x11);
            *(uint *)(extraout_ECX[0x43] + 0xd) = (uint)*(byte *)(extraout_ECX[0x47] + 0x12);
            iStack_1c = extraout_ECX[0x43];
            *(undefined4 *)(iStack_1c + 0x19) = *(undefined4 *)(extraout_ECX[0x47] + 0x17);
            iStack_18 = extraout_ECX[0x43];
            *(int **)(unaff_EBP + -0x14) = &iStack_1c;
            if (iStack_18 != 0) {
              InterlockedIncrement((LONG *)(iStack_18 + 4));
            }
            FUN_007ec421();
            iStack_1c = *(int *)(unaff_EBP + 8);
          }
          if (iStack_1c == 0x2003) {
            extraout_ECX[0x3c] = 1;
            iStack_18 = 1;
            iStack_1c = 0x7ed4be;
            (**(code **)(*(int *)(extraout_ECX[0x19b] + 4) + 0x24))();
            iStack_1c = extraout_ECX[0x3c];
            (**(code **)(*(int *)(extraout_ECX[0x19b] + 4) + 0x1c))();
            (**(code **)(*(int *)(extraout_ECX[0x19d] + 4) + 0x24))(extraout_ECX[0x3c] == 0);
            (**(code **)(*(int *)(extraout_ECX[0x19d] + 4) + 0x1c))(extraout_ECX[0x3c] == 0);
            iStack_18 = extraout_ECX[0x19d];
            iStack_1c = 0x7ed517;
            FUN_004b3b8f();
            if (DAT_00978368 == 0) {
              iVar1 = extraout_ECX[0x47];
              iStack_18 = iVar1 + 0x25b;
              iStack_1c = iVar1 + 0xd3;
            }
            else {
              iStack_18 = DAT_00978368 + 0x2e9c;
              iStack_1c = DAT_00978368 + 0x2d14;
              iVar1 = extraout_ECX[0x47];
            }
            FUN_004b857d(iVar1);
            *(undefined4 *)(extraout_ECX[0x43] + 0x15) = 0;
            *(undefined4 *)(extraout_ECX[0x43] + 0x45) = 0;
            *(undefined4 *)(extraout_ECX[0x43] + 0x109) = 0;
            iStack_18 = extraout_ECX[0x43];
            *(int **)(unaff_EBP + -0x14) = &iStack_1c;
            if (iStack_18 != 0) {
              InterlockedIncrement((LONG *)(iStack_18 + 4));
            }
            FUN_007ec421();
            iStack_1c = *(int *)(unaff_EBP + 8);
          }
          if (*(int *)(unaff_EBP + -0x10) != 0) {
            if (extraout_ECX[0x3b] < 0) {
              if (extraout_ECX[0x39] == 0) {
                iVar1 = 0;
              }
              else {
                iVar1 = *(int *)(extraout_ECX[0x39] + -4);
              }
              extraout_ECX[0x3b] = iVar1 + -1;
            }
            if (extraout_ECX[0x39] == 0) {
              uVar2 = 0;
            }
            else {
              uVar2 = *(uint *)(extraout_ECX[0x39] + -4);
            }
            if (uVar2 <= (uint)extraout_ECX[0x3b]) {
              extraout_ECX[0x3b] = 0;
            }
            iStack_18 = extraout_ECX[0x43];
            *(int **)(unaff_EBP + -0x14) = &iStack_1c;
            if (iStack_18 != 0) {
              InterlockedIncrement((LONG *)(iStack_18 + 4));
            }
            FUN_007ec421();
LAB_007ed341:
            iStack_1c = *(int *)(unaff_EBP + 8);
          }
          goto LAB_007ed344;
        }
      }
LAB_007ed34c:
      iVar1 = *extraout_ECX;
      iStack_18 = 1;
    }
  }
  iStack_1c = 0x7ed623;
  (**(code **)(iVar1 + 0x34))();
LAB_007ed623:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


