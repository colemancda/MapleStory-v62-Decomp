/* FUN_0045c301 - 0x0045c301 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0045c301(void)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  int iVar6;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(extraout_ECX + 0x4f0) = *(undefined4 *)(unaff_EBP + 8);
  iVar3 = DAT_00978368;
  *(int *)(unaff_EBP + -0x20) = extraout_ECX;
  piVar1 = (int *)(iVar3 + 0x3278);
  iVar3 = extraout_ECX;
  while ((iVar4 = *(int *)(iVar3 + 0x44), iVar4 != 0 &&
         (*(uint *)(unaff_EBP + -0x18) < *(uint *)(iVar4 + -4)))) {
    iVar4 = *(int *)(unaff_EBP + -0x1c) + iVar4;
    iVar2 = *(int *)(iVar4 + 0x10);
    if (iVar2 != -1) {
      iVar4 = *(int *)(iVar4 + 0x14) + iVar2;
      *(int *)(unaff_EBP + 8) = iVar4;
      if (iVar2 < iVar4 + -1) {
        iVar6 = iVar2 << 3;
        *(int *)(unaff_EBP + -0x14) = iVar2 + 1;
        do {
          if ((*(int *)(*(int *)(iVar6 + 4 + *piVar1) + 0x40) != 0) &&
             (*(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x14),
             *(int *)(unaff_EBP + -0x14) < iVar4)) {
            do {
              iVar3 = *piVar1;
              iVar5 = *(int *)(unaff_EBP + -0x10) * 8;
              iVar2 = *(int *)(iVar5 + 4 + iVar3);
              if (*(int *)(iVar2 + 0x40) != 0) {
                iVar4 = *(int *)(*(int *)(unaff_EBP + -0x20) + 0x4f0);
                if (iVar4 == 0) {
                  if (*(int *)(*(int *)(iVar3 + 4 + iVar6) + 0x24) < *(int *)(iVar2 + 0x24)) {
                    iVar3 = *(int *)(iVar3 + iVar6 + 4);
                    *(int *)(unaff_EBP + -0x34) = iVar3;
                    if (iVar3 != 0) {
                      InterlockedIncrement((LONG *)(iVar3 + 4));
                    }
                    iVar3 = *piVar1;
                    *(undefined4 *)(unaff_EBP + -4) = 0;
                    FUN_0045e10e(iVar5 + iVar3);
                    FUN_0045e10e(unaff_EBP + -0x38);
                    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                    FUN_0045e46f();
                  }
                }
                else if (iVar4 == 1) {
                  if (*(int *)(iVar2 + 0x20) < *(int *)(*(int *)(iVar3 + 4 + iVar6) + 0x20)) {
                    iVar3 = *(int *)(iVar3 + iVar6 + 4);
                    *(int *)(unaff_EBP + -0x2c) = iVar3;
                    if (iVar3 != 0) {
                      InterlockedIncrement((LONG *)(iVar3 + 4));
                    }
                    iVar3 = *piVar1;
                    *(undefined4 *)(unaff_EBP + -4) = 1;
                    FUN_0045e10e(iVar5 + iVar3);
                    FUN_0045e10e(unaff_EBP + -0x30);
                    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                    if (*(int *)(unaff_EBP + -0x2c) != 0) {
                      FUN_0045e794(0);
                      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
                    }
                  }
                }
                else if ((iVar4 == 2) &&
                        (*(int *)(*(int *)(iVar3 + 4 + iVar6) + 0xc) < *(int *)(iVar2 + 0xc))) {
                  iVar3 = *(int *)(iVar3 + iVar6 + 4);
                  *(int *)(unaff_EBP + -0x24) = iVar3;
                  if (iVar3 != 0) {
                    InterlockedIncrement((LONG *)(iVar3 + 4));
                  }
                  iVar3 = *piVar1;
                  *(undefined4 *)(unaff_EBP + -4) = 2;
                  FUN_0045e10e(iVar5 + iVar3);
                  FUN_0045e10e(unaff_EBP + -0x28);
                  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                  if (*(int *)(unaff_EBP + -0x24) != 0) {
                    FUN_0045e794(0);
                    *(undefined4 *)(unaff_EBP + -0x24) = 0;
                  }
                }
                iVar4 = *(int *)(unaff_EBP + 8);
              }
              *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
            } while (*(int *)(unaff_EBP + -0x10) < iVar4);
            iVar3 = *(int *)(unaff_EBP + -0x20);
          }
          *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
          iVar6 = iVar6 + 8;
        } while (*(int *)(unaff_EBP + -0x14) + -1 < iVar4 + -1);
      }
    }
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 0x1c;
  }
  FUN_004586c2(*(undefined4 *)(iVar3 + 0x504));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


