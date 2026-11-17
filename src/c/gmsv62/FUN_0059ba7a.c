/* FUN_0059ba7a - 0x0059ba7a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __fastcall FUN_0059ba7a(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = (*DAT_0097b704)();
  while (iVar2 = (*DAT_0097b704)(), (uint)(iVar2 - iVar1) < *(uint *)(param_1 + 0x20)) {
    (*DAT_0097b3ec)();
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar1 = FUN_0059b9ff();
  if (iVar1 == 0) {
    bVar3 = false;
  }
  else {
    FUN_0045f0f3(s_MediaList_LST_009659d8,0xffffffff);
    iVar1 = FUN_0059be91();
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
      FUN_0059ba51();
      return false;
    }
    iVar1 = FUN_0059bc6c();
    bVar3 = iVar1 != 0;
    if (bVar3) {
      FUN_0059bb08();
    }
    FUN_0059ba51();
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return bVar3;
}


