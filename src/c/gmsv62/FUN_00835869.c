/* FUN_00835869 - 0x00835869 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00835869(void)

{
  int iVar1;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 0xc) / 10000 == 0xe7) {
    iVar1 = FUN_004becbc(200,0);
    if (iVar1 != 0) {
      FUN_0060142b(0x4c,0,0);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_0045d247(*(undefined4 *)(unaff_EBP + 8));
      FUN_00457d37(*(undefined4 *)(unaff_EBP + 0xc));
      FUN_008358eb(unaff_EBP + -0x1c);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0045ebca();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


