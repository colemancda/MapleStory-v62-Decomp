/* FUN_006ea77e - 0x006ea77e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_006ea77e(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  bool bVar3;
  
  FUN_00879bb8();
  bVar3 = DAT_00979168 == 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (bVar3) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 2;
    iVar2 = unaff_EBP + -0x18;
    *(undefined4 *)(unaff_EBP + -4) = 2;
  }
  else {
    iVar2 = FUN_005e006c(unaff_EBP + -0x20,*(undefined4 *)(unaff_EBP + 0xc));
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 1;
  }
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar2 + 4);
  FUN_005e05a2();
  *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 4;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (((*(byte *)(unaff_EBP + -0x10) & 2) != 0) &&
     (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd,
     *(int *)(unaff_EBP + -0x14) != 0)) {
    FUN_005e064d(0);
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (((*(byte *)(unaff_EBP + -0x10) & 1) != 0) &&
     (*(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe,
     *(int *)(unaff_EBP + -0x1c) != 0)) {
    FUN_005e064d(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


