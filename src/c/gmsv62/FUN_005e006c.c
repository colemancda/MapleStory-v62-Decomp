/* FUN_005e006c - 0x005e006c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_005e006c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_00414f8b(*(undefined4 *)(unaff_EBP + 0xc));
  *(undefined4 *)(unaff_EBP + -4) = 1;
  while( true ) {
    iVar1 = FUN_004538dc(&DAT_00964364,0,0);
    if (iVar1 == -1) break;
    uVar2 = FUN_005e03fa(unaff_EBP + -0x14,&DAT_00964364,&DAT_00978474);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00414f8b(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
  }
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  FUN_005e0a3a(unaff_EBP + -0x10,unaff_EBP + 0xc);
  FUN_005df3f8(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
  *(undefined4 *)(unaff_EBP + -0x1c) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}


