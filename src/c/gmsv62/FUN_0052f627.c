/* FUN_0052f627 - 0x0052f627 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0052f627(void)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar2 = FUN_0042459a();
  FUN_0052b7ca();
  if (0 < iVar2) {
    *(int *)(unaff_EBP + -0x10) = iVar2;
    do {
      FUN_0052db8e(unaff_EBP + -0x18,*(undefined4 *)(unaff_EBP + 8));
      iVar2 = unaff_EBP + -0x18;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_0052fee3(0xffffffff);
      FUN_0052fe27(iVar2);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        FUN_0048ba7b(0);
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
      piVar1 = (int *)(unaff_EBP + -0x10);
      *piVar1 = *piVar1 + -1;
    } while (*piVar1 != 0);
  }
  (**(code **)(*(int *)(extraout_ECX + 0x434) + 0x2c))(0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


