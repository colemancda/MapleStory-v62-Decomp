/* FUN_004b8308 - 0x004b8308 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_004b8308(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar1 = extraout_ECX[1];
  uVar2 = extraout_ECX[2];
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00434e21(unaff_EBP + -0x10,s__d__d__d_00964d94,*extraout_ECX,iVar1 != 0,uVar2);
  puVar3 = *(undefined4 **)(unaff_EBP + 8);
  *puVar3 = 0;
  FUN_00414f8b(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar3;
}


