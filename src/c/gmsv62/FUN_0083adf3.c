/* FUN_0083adf3 - 0x0083adf3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0083adf3(void)

{
  int unaff_EBP;
  int iVar1;
  int iVar2;
  int local_1c;
  
  FUN_00879bb8();
  local_1c = 0;
  FUN_0060142b(0x7d,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  local_1c = 9;
  FUN_00457cda();
  iVar2 = *(int *)(unaff_EBP + 0xc);
  local_1c = iVar2;
  FUN_0045d247();
  if (0 < iVar2) {
    iVar1 = *(int *)(unaff_EBP + 8);
    do {
      local_1c = 0;
      *(int **)(unaff_EBP + 0xc) = &local_1c;
      FUN_00414f8b(iVar1);
      FUN_00459cb5();
      iVar1 = iVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_1c = unaff_EBP + -0x1c;
  FUN_004751b2();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_1c = 0x83ae69;
  FUN_0045ebca();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


