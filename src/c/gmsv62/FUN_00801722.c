/* FUN_00801722 - 0x00801722 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00801722(void)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if ((*(int *)(extraout_ECX + 0x248) == 3) || (*(int *)(extraout_ECX + 0x248) == 4)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  iVar2 = FUN_005e4404(uVar1);
  if (iVar2 != 0) {
    FUN_0060142b(0x94,0,0);
    uVar1 = *(undefined4 *)(extraout_ECX + 0x238);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00457d37(uVar1);
    iVar2 = FUN_005e4469(unaff_EBP + -0x1c,0,0);
    if (iVar2 == 0) {
      FUN_004751b2(unaff_EBP + -0x1c);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


