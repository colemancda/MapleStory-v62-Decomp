/* FUN_007b3c5d - 0x007b3c5d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007b3c5d(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = FUN_0078ce23();
  uVar2 = 0;
  if (iVar1 == 0) goto LAB_007b3cf3;
  iVar1 = FUN_004bf0d4();
  if (iVar1 == 0) {
    iVar1 = FUN_00793618();
    if (iVar1 != 0) {
      uVar2 = FUN_00679d22(unaff_EBP + -0x14,0xe9d);
      *(undefined4 *)(unaff_EBP + -4) = 1;
      FUN_00471102(uVar2,0xc);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      goto LAB_007b3ceb;
    }
  }
  else {
    uVar2 = FUN_00679d22(unaff_EBP + -0x10,0xe9e);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00471102(uVar2,0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_007b3ceb:
    FUN_00414ebb();
  }
  uVar2 = 1;
LAB_007b3cf3:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


