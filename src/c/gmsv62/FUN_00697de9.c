/* FUN_00697de9 - 0x00697de9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00697de9(void)

{
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar1;
  
  FUN_00879bb8();
  FUN_0045b90e(unaff_EBP + -0x10);
  if ((*(int *)(*(int *)(extraout_ECX + 0x90) + 0x48) == 0) ||
     ((*(char **)(unaff_EBP + -0x10) != (char *)0x0 && (**(char **)(unaff_EBP + -0x10) != '\0')))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


