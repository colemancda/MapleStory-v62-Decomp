/* FUN_007b41d1 - 0x007b41d1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_007b41d1(void)

{
  short sVar1;
  int unaff_EBP;
  int iVar2;
  
  FUN_00879bb8();
  if (DAT_00978368 != 0) {
    FUN_00455c59(unaff_EBP + -0x14);
    iVar2 = *(int *)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar2 != 0) {
      sVar1 = FUN_0045f084(iVar2 + 0x39,*(undefined4 *)(iVar2 + 0x3d));
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar2 = (int)sVar1;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        FUN_0045e7c2(0);
      }
      goto LAB_007b4229;
    }
  }
  iVar2 = -1;
LAB_007b4229:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}


