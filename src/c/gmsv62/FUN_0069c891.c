/* FUN_0069c891 - 0x0069c891 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0069c891(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00414f8b(unaff_EBP + 8);
  *(undefined4 *)(extraout_ECX + 0xa4) = 1;
  (**(code **)(**(int **)(extraout_ECX + 0x88) + 0xc))();
  FUN_00817f6e(-(uint)(*(int *)(extraout_ECX + 0x90) != 0) & *(int *)(extraout_ECX + 0x90) + 4U);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


