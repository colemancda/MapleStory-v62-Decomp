/* FUN_00452b5f - 0x00452b5f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00452b5f(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  
  FUN_00879bb8();
  uVar3 = extraout_ECX;
  puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x497);
  uVar1 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0045205d(uVar1,uVar3);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  **(undefined4 **)(unaff_EBP + 0xc) = *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


