/* FUN_00718cc0 - 0x00718cc0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00718cc0(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  int local_8;
  
  FUN_00879bb8();
  if ((*(byte *)(unaff_EBP + 0xf) & 0x80) == 0) {
    if (*(int *)(unaff_EBP + 8) == 0xd) {
      local_8 = unaff_EBP + 8;
      FUN_0048b998();
      FUN_0045b90e();
      *(undefined4 *)(unaff_EBP + -4) = 0;
      local_8 = 0;
      uVar1 = FUN_004f136e();
      local_8 = 0;
      *(int **)(unaff_EBP + 0xc) = &local_8;
      FUN_00414f8b(uVar1);
      FUN_00718d41();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      local_8 = 0x718d32;
      FUN_00414ebb();
    }
    else if (*(int *)(unaff_EBP + 8) == 0x1b) {
      local_8 = 0x718cea;
      FUN_0083cb3e();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


