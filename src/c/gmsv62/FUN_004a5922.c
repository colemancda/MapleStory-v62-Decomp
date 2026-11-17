/* FUN_004a5922 - 0x004a5922 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined1 FUN_004a5922(void)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0xb8) != 0) {
    if (*(int *)(extraout_ECX + 0x5c) < *(int *)(extraout_ECX + 0x48)) {
      FUN_0045e053(unaff_EBP + -0x10,*(int *)(extraout_ECX + 0x5c),*(int *)(extraout_ECX + 0x48));
      *(undefined4 *)(unaff_EBP + -4) = 0;
      puVar2 = (undefined1 *)FUN_00415015(1,1);
      uVar1 = *puVar2;
      FUN_004150c0(0xffffffff);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      goto LAB_004a597e;
    }
  }
  uVar1 = 0;
LAB_004a597e:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


