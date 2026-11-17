/* FUN_004b876a - 0x004b876a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004b876a(int param_1)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar1 = FUN_0042452b();
  *(undefined1 *)(param_1 + 0xc) = uVar1;
  uVar3 = FUN_0042452b();
  *(uint *)(param_1 + 0xd) = uVar3 & 0xff;
  uVar4 = FUN_0042459a();
  *(undefined4 *)(param_1 + 0x11) = uVar4;
  _memset((undefined4 *)(param_1 + 0x19),0,0xc4);
  _memset((void *)(param_1 + 0xdd),0,0xc4);
  FUN_0042452b();
  uVar4 = FUN_0042459a();
  *(undefined4 *)(param_1 + 0x19) = uVar4;
  while (bVar2 = FUN_0042452b(), bVar2 != 0xff) {
    uVar4 = FUN_0042459a();
    if ((bVar2 < 0x31) && (bVar2 != 0)) {
      iVar5 = FUN_0044d79d(uVar4,(uint)bVar2,2);
      if (iVar5 != 0) {
        *(undefined4 *)(param_1 + 0x19 + (uint)bVar2 * 4) = uVar4;
      }
    }
  }
  while (bVar2 = FUN_0042452b(), bVar2 != 0xff) {
    uVar4 = FUN_0042459a();
    if ((bVar2 < 0x31) && (bVar2 != 0)) {
      iVar5 = FUN_0044d79d(uVar4,(uint)bVar2,2);
      if (iVar5 != 0) {
        *(undefined4 *)(param_1 + 0xdd + (uint)bVar2 * 4) = uVar4;
      }
    }
  }
  uVar4 = FUN_0042459a();
  *(undefined4 *)(param_1 + 0x15) = uVar4;
  FUN_004245d2(param_1 + 0x1a1,0xc);
  return;
}


