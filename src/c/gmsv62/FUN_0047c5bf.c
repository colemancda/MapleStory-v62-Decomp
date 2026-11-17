/* FUN_0047c5bf - 0x0047c5bf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0047c5bf(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_00879bb8();
  iVar4 = *(int *)(extraout_ECX + 0x90);
  iVar2 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar4 + -4);
  }
  if (0 < iVar4) {
    do {
      iVar1 = FUN_0045ec92(*(int *)(extraout_ECX + 0x90) + iVar2 * 4);
      if (iVar1 != 0) {
        uVar3 = 1;
        goto LAB_0047c605;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar4);
  }
  uVar3 = 0;
LAB_0047c605:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


