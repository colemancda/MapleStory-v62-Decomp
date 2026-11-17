/* FUN_0087c71f - 0x0087c71f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0087c71f(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  
  if (DAT_0098079c == 0) {
    do {
      uVar1 = *param_1;
      if ((uVar1 < 0x5b) && (0x40 < uVar1)) {
        uVar1 = uVar1 + 0x20;
      }
      uVar2 = *param_2;
      if ((uVar2 < 0x5b) && (0x40 < uVar2)) {
        uVar2 = uVar2 + 0x20;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    } while ((uVar1 != 0) && (uVar1 == uVar2));
  }
  else {
    InterlockedIncrement(&DAT_00982008);
    bVar3 = DAT_00982004 == 0;
    if (!bVar3) {
      InterlockedDecrement(&DAT_00982008);
      FUN_0087d9ec(0x13);
    }
    do {
      uVar1 = *param_1;
      param_1 = param_1 + 1;
      uVar1 = FUN_00884549(uVar1);
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      uVar2 = FUN_00884549(uVar2);
      if (uVar1 == 0) break;
    } while (uVar1 == uVar2);
    if (bVar3) {
      InterlockedDecrement(&DAT_00982008);
    }
    else {
      FUN_0087da4d(0x13);
    }
  }
  return (uint)uVar1 - (uint)uVar2;
}


