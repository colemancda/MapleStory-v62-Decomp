/* FUN_0084a288 - 0x0084a288 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084a288(void)

{
  int extraout_ECX;
  int iVar1;
  int iVar2;
  int unaff_EBP;
  int iVar3;
  
  FUN_00879bb8();
  iVar2 = 0;
  if (*(int *)(extraout_ECX + 0x3278) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(*(int *)(extraout_ECX + 0x3278) + -4);
  }
  iVar1 = *(int *)(unaff_EBP + -0x18);
  if (0 < iVar1 + -1) {
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
    do {
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x14);
      if (*(int *)(unaff_EBP + -0x14) < iVar1) {
        do {
          iVar1 = *(int *)(extraout_ECX + 0x3278);
          iVar3 = *(int *)(unaff_EBP + -0x10) * 8;
          if (*(int *)(*(int *)(iVar3 + 4 + iVar1) + 0xc) <
              *(int *)(*(int *)(iVar2 + 4 + iVar1) + 0xc)) {
            iVar1 = *(int *)(iVar2 + iVar1 + 4);
            *(int *)(unaff_EBP + -0x1c) = iVar1;
            if (iVar1 != 0) {
              InterlockedIncrement((LONG *)(iVar1 + 4));
            }
            iVar1 = *(int *)(extraout_ECX + 0x3278);
            *(undefined4 *)(unaff_EBP + -4) = 0;
            FUN_0045e10e(iVar3 + iVar1);
            FUN_0045e10e(unaff_EBP + -0x20);
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            if (*(int *)(unaff_EBP + -0x1c) != 0) {
              FUN_0045e794(0);
              *(undefined4 *)(unaff_EBP + -0x1c) = 0;
            }
          }
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
        } while (*(int *)(unaff_EBP + -0x10) < *(int *)(unaff_EBP + -0x18));
      }
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
      iVar1 = *(int *)(unaff_EBP + -0x18);
      iVar2 = iVar2 + 8;
    } while (*(int *)(unaff_EBP + -0x14) + -1 < iVar1 + -1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


