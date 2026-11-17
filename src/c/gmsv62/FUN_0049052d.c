/* FUN_0049052d - 0x0049052d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0049052d(void)

{
  int iVar1;
  uint uVar2;
  int *extraout_ECX;
  int iVar3;
  uint uVar4;
  int unaff_EBP;
  int iVar5;
  int iStack_1c;
  int iStack_18;
  
  FUN_00879bb8();
  uVar4 = *(uint *)(unaff_EBP + 0xc) & 0x80000000;
  if (uVar4 == 0) {
    iStack_18 = 0x490555;
    iVar1 = (*DAT_0097b704)();
    if ((uint)extraout_ECX[0x1cc] <= (uint)(iVar1 - _DAT_00964bf4)) {
      iStack_18 = 0x490569;
      uVar2 = (*DAT_0097b704)();
      iVar1 = *(int *)(unaff_EBP + 8);
      extraout_ECX[0x1cc] = uVar2;
      iVar5 = 1;
      if (iVar1 == 0x21) {
        iVar1 = -1;
      }
      else {
        iVar1 = iVar5;
        if (*(int *)(unaff_EBP + 8) != 0x22) goto LAB_004905cd;
      }
      iVar3 = *(int *)(extraout_ECX[0x1a] + 0x38);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = (extraout_ECX[0x1cb] + iVar3 + iVar1) % iVar3;
      }
      iStack_1c = 0x4905aa;
      iStack_18 = iVar3;
      FUN_004586f2();
      iStack_1c = 0x4905b3;
      iStack_18 = iVar3;
      FUN_004ae16e();
      goto LAB_0049087e;
    }
  }
  else {
    iStack_18 = 0x4905c0;
    iVar1 = (*DAT_0097b704)();
    extraout_ECX[0x1cc] = (iVar1 - _DAT_00964bf4) + -1;
LAB_004905cd:
    iStack_18 = 0x4905d8;
    iVar1 = FUN_0045dc32();
    if ((iVar1 == 0) && (iVar5 = 0, uVar4 == 0)) {
      iVar1 = extraout_ECX[0x5b];
      if (iVar1 == -1) {
        iVar5 = 0;
        iStack_18 = 0x490608;
        (**(code **)(extraout_ECX[1] + 0x34))();
        iVar1 = extraout_ECX[0x59];
        if (iVar1 == 0) goto LAB_0049087c;
        iVar3 = *(int *)(unaff_EBP + 8);
        if (iVar3 == 0xd) {
          iVar5 = extraout_ECX[0x5a];
          if ((-1 < iVar5) && (iVar5 < iVar1)) {
            iStack_18 = 0;
            extraout_ECX[0x5b] = 0;
            iStack_1c = iVar5;
            FUN_00493e2d();
            iStack_18 = extraout_ECX[extraout_ECX[0x5a] + 0x5c];
            iStack_1c = unaff_EBP + -0x14;
            FUN_004903a3();
            iStack_18 = *(int *)(unaff_EBP + -0x10);
            *(undefined4 *)(unaff_EBP + -4) = 0;
            if (iStack_18 != 0) {
              *(int **)(unaff_EBP + 8) = &iStack_1c;
              iStack_1c = iStack_18;
              if (*(int *)(unaff_EBP + -0x10) != 0) {
                InterlockedIncrement((LONG *)(*(int *)(unaff_EBP + -0x10) + 4));
              }
              FUN_00494487();
            }
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            if (*(int *)(unaff_EBP + -0x10) != 0) {
              iStack_18 = 0;
              iStack_1c = 0x49079e;
              FUN_0045e794();
              *(undefined4 *)(unaff_EBP + -0x10) = 0;
            }
          }
          iStack_18 = 0x4907a9;
          (**(code **)(extraout_ECX[1] + 0x34))();
          iVar5 = 1;
        }
        else {
          if (iVar3 == 0x25) {
            if (extraout_ECX[0x5a] < 0) {
              extraout_ECX[0x5a] = 0;
            }
            iVar5 = extraout_ECX[0x5a];
            if (iVar5 % 2 == 0) {
              iVar5 = iVar5 + 1;
            }
            else {
              iVar5 = iVar5 + -1;
            }
            extraout_ECX[0x5a] = iVar5;
            if (iVar1 <= iVar5) {
              extraout_ECX[0x5a] = iVar1 + -1;
            }
          }
          else if (iVar3 == 0x26) {
            if (extraout_ECX[0x5a] < 0) {
              extraout_ECX[0x5a] = 0;
            }
            iVar5 = extraout_ECX[0x5a];
            if (1 < iVar5) {
              iVar5 = iVar5 + -2;
              goto LAB_004906d9;
            }
            iVar5 = iVar5 + (iVar1 / 2) * 2;
            extraout_ECX[0x5a] = iVar5;
            if (iVar1 <= iVar5) {
              extraout_ECX[0x5a] = iVar5 + -2;
            }
          }
          else if (iVar3 == 0x27) {
            iVar5 = extraout_ECX[0x5a];
            if (iVar5 == iVar1 + -1) {
              extraout_ECX[0x5a] = iVar5 / 2 << 1;
            }
            else {
              if (iVar5 % 2 == 1) {
                iVar5 = iVar5 + -1;
              }
              else {
                iVar5 = iVar5 + 1;
              }
              extraout_ECX[0x5a] = iVar5;
            }
          }
          else {
            if (iVar3 != 0x28) goto LAB_0049086f;
            if (extraout_ECX[0x5a] < 0) {
              extraout_ECX[0x5a] = 0;
            }
            iVar5 = extraout_ECX[0x5a];
            if (iVar1 - iVar5 < 3) {
              iVar5 = iVar5 % 2;
            }
            else {
              iVar5 = iVar5 + 2;
            }
LAB_004906d9:
            extraout_ECX[0x5a] = iVar5;
          }
LAB_00490719:
          iVar5 = 1;
          extraout_ECX[0x1cd] = 1;
        }
      }
      else {
        iVar3 = *(int *)(unaff_EBP + 8);
        if (iVar3 == 0xd) {
          iVar5 = extraout_ECX[0x5a];
          if ((((-1 < iVar5) && (iVar5 < extraout_ECX[0x59])) && (-1 < iVar1)) && (iVar1 < 3)) {
            iStack_18 = 0x490849;
            iVar1 = (**(code **)(*(int *)(extraout_ECX[(iVar5 + iVar1 + iVar5 * 2) * 2 + 0x1c] + 4)
                                + 0x20))();
            if (iVar1 != 0) {
              iStack_18 = *(undefined4 *)
                           (extraout_ECX[(extraout_ECX[0x5a] * 3 + extraout_ECX[0x5b]) * 2 + 0x1c] +
                           0x14);
              iStack_1c = 0x49086a;
              (**(code **)(*extraout_ECX + 0x20))();
            }
          }
        }
        else {
          if (iVar3 == 0x1b) {
            iStack_18 = 0xffffffff;
            iStack_1c = -1;
            extraout_ECX[0x5b] = -1;
            FUN_00493e2d();
            goto LAB_00490719;
          }
          if (iVar3 == 0x25) {
            extraout_ECX[0x5b] = iVar1 + -1;
            if (iVar1 + -1 < 0) {
              extraout_ECX[0x5b] = 2;
            }
          }
          else {
            if (iVar3 != 0x27) goto LAB_0049086f;
            extraout_ECX[0x5b] = iVar1 + 1;
            if (2 < iVar1 + 1) {
              extraout_ECX[0x5b] = 0;
            }
          }
          iStack_18 = extraout_ECX[0x5b];
          iStack_1c = extraout_ECX[0x5a];
          FUN_00493e2d();
        }
        iVar5 = 1;
      }
LAB_0049086f:
      iStack_18 = 0;
      iStack_1c = 0x490878;
      FUN_008161f1();
      goto LAB_0049087e;
    }
  }
LAB_0049087c:
  iVar5 = 0;
LAB_0049087e:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar5;
}


