/* FUN_0040598c - 0x0040598c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0040598c(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar2;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = (undefined4 *)(extraout_ECX + 0xc);
  FUN_00402aba();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar2 = (int *)(extraout_ECX + 0x14);
  if (*piVar2 == 0) {
    iVar1 = FUN_00402aea(0x1c,0x10);
    *piVar2 = iVar1;
  }
  *piVar2 = *(int *)*piVar2;
  piVar2 = (int *)(extraout_ECX + 0x10);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *(undefined4 *)(extraout_ECX + 0xc) = 0;
  }
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return;
}


