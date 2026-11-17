/* FUN_004e8755 - 0x004e8755 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e8755(void)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  int unaff_EBP;
  int local_20;
  
  FUN_00879bb8();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  pcVar2 = (char *)*puVar1;
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    if (DAT_00979178 == 0) {
      local_20 = 0;
      FUN_0060142b(0x2e,0);
      *(int **)(unaff_EBP + -0x10) = &local_20;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      local_20 = 0;
      FUN_00414f8b(puVar1);
      FUN_00459cb5();
      local_20 = *(int *)(unaff_EBP + 0xc);
      FUN_00457cda();
      local_20 = unaff_EBP + -0x20;
      FUN_004751b2();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      local_20 = 0x4e8800;
      FUN_0045ebca();
    }
    else {
      local_20 = 0x125;
      uVar3 = FUN_00679d22(unaff_EBP + 8);
      local_20 = 0xc;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00471102(uVar3);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      local_20 = 0x4e87af;
      FUN_00414ebb();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


