/* FUN_00697d73 - 0x00697d73 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00697d73(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBP;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_00879bb8();
  FUN_0045b90e(unaff_EBP + -0x10);
  uVar3 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(char **)(unaff_EBP + -0x10) != (char *)0x0) && (**(char **)(unaff_EBP + -0x10) != '\0')) {
    uVar5 = 1;
    uVar4 = 0;
    uVar1 = FUN_00415015(0x400,1);
    iVar2 = FUN_00471777(uVar1,uVar4,uVar5);
    FUN_004150c0(0xffffffff);
    if (iVar2 != 0) {
      uVar3 = 1;
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


