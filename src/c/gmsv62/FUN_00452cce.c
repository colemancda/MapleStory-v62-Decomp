/* FUN_00452cce - 0x00452cce in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00452cce(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x49c);
  uVar1 = *puVar3;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0045205d(uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  iVar2 = *(int *)(unaff_EBP + 8);
  (*DAT_0097b56c)(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(unaff_EBP + 0x14));
  (*DAT_0097b56c)(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(unaff_EBP + 0x18));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


