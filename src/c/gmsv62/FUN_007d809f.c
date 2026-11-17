/* FUN_007d809f - 0x007d809f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_007d809f(void)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  undefined4 uVar4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_00414edd(&DAT_00978474,0xffffffff);
  puVar1 = *(undefined4 **)(unaff_EBP + 0xc);
  pcVar2 = (char *)*puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    uVar4 = 0;
    FUN_0045ed72(0);
    FUN_0045ee27(uVar4);
    _memset((void *)(unaff_EBP + -0x114),0,0x100);
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + 0xc,0x3be);
    FUN_0087c9ab(*puVar1,*puVar3,unaff_EBP + -0x114);
    FUN_00414ebb();
    FUN_00414edd(unaff_EBP + -0x114,0xffffffff);
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + -4);
    }
    uVar4 = FUN_0045e053(unaff_EBP + 0xc,uVar4,0xffffffff);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00414f8b(uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
  }
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *puVar1 = 0;
  FUN_00414f8b(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


