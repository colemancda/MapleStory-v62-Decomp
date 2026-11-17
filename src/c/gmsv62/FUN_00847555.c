/* FUN_00847555 - 0x00847555 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00847555(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = FUN_0042459a(extraout_ECX,extraout_ECX);
  FUN_0045a1d8(unaff_EBP + 8,uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(char **)(unaff_EBP + 8) != (char *)0x0) && (**(char **)(unaff_EBP + 8) != '\0')) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x136);
    uVar1 = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00434e21(unaff_EBP + -0x10,uVar1,*(undefined4 *)(unaff_EBP + 8));
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    FUN_00471102(unaff_EBP + -0x10,0xc);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


