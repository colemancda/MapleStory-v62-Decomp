/* FUN_007cef81 - 0x007cef81 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007cef81(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_0042459a();
  iVar2 = FUN_0042459a();
  *(int *)(param_1 + 0xd70) = (iVar1 * 100) / iVar2;
  uVar4 = __allmul(iVar1,iVar1 >> 0x1f,0x2e,0);
  uVar3 = __alldiv(uVar4,iVar2,iVar2 >> 0x1f);
  *(undefined4 *)(param_1 + 0x17d8) = uVar3;
  FUN_0079cd48();
  iVar1 = FUN_0085c725(*(undefined4 *)(param_1 + 0xd78));
  if ((iVar1 != 0) && (DAT_0097beec != 0)) {
    FUN_008161f1(0);
  }
  return;
}


