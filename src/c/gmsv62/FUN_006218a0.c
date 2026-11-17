/* FUN_006218a0 - 0x006218a0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_006218a0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 0xc);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + -4);
  }
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) {
      iVar2 = *(int *)(unaff_EBP + 8);
      *(undefined4 *)(iVar2 + 4) = 0;
LAB_00621947:
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return iVar2;
    }
    *(undefined4 *)(unaff_EBP + -0x10) =
         *(undefined4 *)(*(int *)(extraout_ECX + 0xc) + iVar2 * 8 + 4);
    FUN_00622280();
    iVar1 = *(int *)(unaff_EBP + -0x10);
    iVar3 = *(int *)(iVar1 + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar3 == 0) {
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    else {
      (*DAT_0097b504)(unaff_EBP + -0x24,*(int *)(iVar1 + 0xc) - *(int *)(unaff_EBP + 0x14),
                      *(int *)(iVar1 + 0x10) + -0x32,
                      *(int *)(unaff_EBP + 0x14) + *(int *)(iVar1 + 0xc),
                      *(int *)(iVar1 + 0x10) + 0x32);
      iVar3 = (*DAT_0097b57c)(unaff_EBP + -0x24,*(undefined4 *)(unaff_EBP + 0xc),
                              *(undefined4 *)(unaff_EBP + 0x10));
      if (iVar3 != 0) {
        iVar2 = *(int *)(unaff_EBP + 8);
        *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(unaff_EBP + -0x10);
        FUN_00622280();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          FUN_006222b3(0);
        }
        goto LAB_00621947;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar1 = *(int *)(unaff_EBP + -0x10);
    }
    if (iVar1 != 0) {
      FUN_006222b3(0);
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
  } while( true );
}


