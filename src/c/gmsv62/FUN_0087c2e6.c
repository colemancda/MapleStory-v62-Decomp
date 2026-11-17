/* FUN_0087c2e6 - 0x0087c2e6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0087c2e6(ushort *param_1,ushort *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = 0;
  if (param_3 != 0) {
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
        param_3 = param_3 + -1;
      } while (((param_3 != 0) && (uVar1 != 0)) && (uVar1 == uVar2));
    }
    else {
      InterlockedIncrement(&DAT_00982008);
      bVar4 = DAT_00982004 == 0;
      if (!bVar4) {
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
        param_3 = param_3 + -1;
        if ((param_3 == 0) || (uVar1 == 0)) break;
      } while (uVar1 == uVar2);
      if (bVar4) {
        InterlockedDecrement(&DAT_00982008);
      }
      else {
        FUN_0087da4d(0x13);
      }
    }
    iVar3 = (uint)uVar1 - (uint)uVar2;
  }
  return iVar3;
}


