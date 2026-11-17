/* FUN_008844cf - 0x008844cf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_008844cf(uint param_1)

{
  undefined2 uVar1;
  uint uVar2;
  undefined2 extraout_var;
  LONG LVar3;
  undefined2 uVar4;
  ushort uVar5;
  bool bVar6;
  
  uVar2 = 0xffff;
  uVar5 = (ushort)param_1;
  if (uVar5 != 0xffff) {
    if (DAT_0098079c == 0) {
      if ((0x40 < uVar5) && (uVar5 < 0x5b)) {
        param_1 = param_1 + 0x20;
      }
      uVar2 = param_1 & 0xffff;
    }
    else {
      InterlockedIncrement(&DAT_00982008);
      bVar6 = DAT_00982004 != 0;
      if (bVar6) {
        InterlockedDecrement(&DAT_00982008);
        FUN_0087d9ec(0x13);
      }
      uVar1 = FUN_00884549(param_1);
      if (bVar6) {
        FUN_0087da4d(0x13);
        uVar4 = extraout_var;
      }
      else {
        LVar3 = InterlockedDecrement(&DAT_00982008);
        uVar4 = (short)((uint)LVar3 >> 0x10);
      }
      uVar2 = CONCAT22(uVar4,uVar1);
    }
  }
  return uVar2;
}


