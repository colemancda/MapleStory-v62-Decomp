/* FUN_00888589 - 0x00888589 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00888589(int param_1,int param_2)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  undefined1 local_7c [120];
  
  iVar1 = (*DAT_0098092c)((ushort)param_1 & 0x3ff | 0x400,1,local_7c,0x78);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00888707(local_7c);
  if ((param_1 != iVar1) && (param_2 != 0)) {
    sVar2 = FUN_00888740(DAT_0098091c);
    sVar3 = _strlen(DAT_0098091c);
    if (sVar2 == sVar3) {
      return 0;
    }
  }
  return 1;
}


