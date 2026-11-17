/* FUN_0088398b - 0x0088398b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0088398b(int param_1)

{
  undefined2 uVar1;
  undefined2 extraout_var;
  LONG LVar2;
  undefined2 uVar3;
  bool bVar4;
  
  if (DAT_0098079c == 0) {
    if ((0x60 < (ushort)param_1) && ((ushort)param_1 < 0x7b)) {
      return param_1 + 0xffe0;
    }
  }
  else {
    InterlockedIncrement(&DAT_00982008);
    bVar4 = DAT_00982004 != 0;
    if (bVar4) {
      InterlockedDecrement(&DAT_00982008);
      FUN_0087d9ec(0x13);
    }
    uVar1 = FUN_008839ff(param_1);
    if (bVar4) {
      FUN_0087da4d(0x13);
      uVar3 = extraout_var;
    }
    else {
      LVar2 = InterlockedDecrement(&DAT_00982008);
      uVar3 = (short)((uint)LVar2 >> 0x10);
    }
    param_1 = CONCAT22(uVar3,uVar1);
  }
  return param_1;
}


