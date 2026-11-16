/* FUN_5080b7bb - 0x5080b7bb in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 FUN_5080b7bb(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_5080e090();
  *(undefined4 *)(unaff_EBP + -0x10) = 0x8007000e;
  puVar3 = (undefined4 *)FUN_5080ba68();
  *(undefined4 **)(unaff_EBP + -0x14) = puVar3;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_5080a701();
    *puVar3 = &PTR_LAB_508189e8;
    puVar3[1] = &PTR_FUN_508189e4;
    puVar3[2] = &PTR_LAB_508189e0;
    InterlockedIncrement(&DAT_5081e594);
  }
  if (puVar3 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar3 + 3);
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    InterlockedDecrement(puVar3 + 3);
  }
  uVar1 = *(undefined4 *)(unaff_EBP + -0xc);
  **(undefined4 **)(unaff_EBP + 8) = puVar3;
  uVar2 = *(undefined4 *)(unaff_EBP + -0x10);
  *unaff_FS_OFFSET = uVar1;
  return uVar2;
}


