/* FUN_005f5681 - 0x005f5681 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005f5681(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar2 = FUN_0042452b();
  if ((uVar2 & 0xff) != 0) {
    *(uint *)(unaff_EBP + -0x10) = uVar2 & 0xff;
    do {
      FUN_004b890a(*(undefined4 *)(unaff_EBP + 8));
      iVar3 = FUN_005f3a71(*(undefined4 *)(unaff_EBP + -0x20));
      if (iVar3 != 0) {
        FUN_005f575b(unaff_EBP + -0x1c);
        iVar3 = unaff_EBP + -0x30;
        FUN_00429303(iVar3);
        puVar4 = (undefined4 *)FUN_004f0de4(iVar3);
        FUN_005f55c7(*puVar4,puVar4[1],puVar4[2],puVar4[3]);
      }
      piVar1 = (int *)(unaff_EBP + -0x10);
      *piVar1 = *piVar1 + -1;
    } while (*piVar1 != 0);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


