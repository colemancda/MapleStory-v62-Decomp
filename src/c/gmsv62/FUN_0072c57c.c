/* FUN_0072c57c - 0x0072c57c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0072c57c(int param_1,byte param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    pbVar1 = (byte *)(*(int *)(param_1 + 0xa4) + iVar3);
    if (*pbVar1 < 10) {
      bVar2 = (param_2 & 1) << 1;
    }
    else {
      bVar2 = param_2 & 2;
    }
    iVar3 = iVar3 + 2;
    pbVar1[1] = bVar2;
  } while (iVar3 < 0x48);
  FUN_008161f1(0);
  return;
}


