/* FUN_0058b845 - 0x0058b845 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0058b845(void)

{
  int iVar1;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 uVar2;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) == 1) {
    if ((DAT_00978368 == 0) || (*(int *)(DAT_00978368 + 0x2084) == 0)) {
      FUN_00569a6c();
    }
    else {
      FUN_0058ae08(1);
      FUN_0060142b(0xb,0,0);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_004751b2(unaff_EBP + -0x1c);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0045ebca();
    }
    iVar1 = *extraout_ECX;
    uVar2 = 1;
  }
  else {
    FUN_00569ad3();
    if (*(int *)(unaff_EBP + 8) != 2) goto LAB_0058b8ce;
    iVar1 = *extraout_ECX;
    uVar2 = 2;
  }
  (**(code **)(iVar1 + 0x34))(uVar2);
LAB_0058b8ce:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


