/* FUN_00889b12 - 0x00889b12 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00889b12(byte param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1;
  if (param_2 == 1) {
    return (-(uint)((*(byte *)((int)&DAT_00982120 + uVar2 + 1) & 8) != 0) & 3) - 1;
  }
  bVar1 = *(byte *)((int)&DAT_00982120 + uVar2 + 1);
  if ((bVar1 & 4) != 0) {
    return 1;
  }
  if (((*(ushort *)(&DAT_009726fa + uVar2 * 2) & 0x157) == 0) && ((bVar1 & 3) == 0)) {
    return -1;
  }
  return 0;
}


