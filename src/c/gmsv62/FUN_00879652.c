/* FUN_00879652 - 0x00879652 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00879652(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_0087c6f3();
  uVar1 = FUN_0087d869(DAT_00982260);
  if (uVar1 < (uint)((int)DAT_0098225c + (4 - DAT_00982260))) {
    iVar2 = FUN_0087d869(DAT_00982260);
    iVar2 = FUN_0087d53a(DAT_00982260,iVar2 + 0x10);
    if (iVar2 == 0) {
      param_1 = 0;
      goto LAB_008796c7;
    }
    DAT_0098225c = (undefined4 *)(iVar2 + ((int)DAT_0098225c - DAT_00982260 >> 2) * 4);
    DAT_00982260 = iVar2;
  }
  *DAT_0098225c = param_1;
  DAT_0098225c = DAT_0098225c + 1;
LAB_008796c7:
  FUN_0087c6fc();
  return param_1;
}


