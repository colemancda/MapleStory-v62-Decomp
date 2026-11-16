/* FUN_10009120 - 0x10009120 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void __cdecl FUN_10009120(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x16b4);
  if (iVar3 < 0xe) {
    *(ushort *)(param_1 + 0x16b0) =
         *(ushort *)(param_1 + 0x16b0) | (ushort)(2 << ((byte)iVar3 & 0x1f));
    *(int *)(param_1 + 0x16b4) = iVar3 + 3;
  }
  else {
    *(ushort *)(param_1 + 0x16b0) =
         *(ushort *)(param_1 + 0x16b0) | (ushort)(2 << ((byte)iVar3 & 0x1f));
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         *(undefined1 *)(param_1 + 0x16b0);
    iVar3 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar3;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar3) = *(undefined1 *)(param_1 + 0x16b1);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    iVar3 = *(int *)(param_1 + 0x16b4);
    *(int *)(param_1 + 0x16b4) = iVar3 + -0xd;
    *(ushort *)(param_1 + 0x16b0) = 2 >> (0x10U - (char)iVar3 & 0x1f);
  }
  uVar2 = DAT_1000e8ec;
  iVar3 = *(int *)(param_1 + 0x16b4);
  uVar1 = DAT_1000e8ec >> 0x10;
  if ((int)(0x10 - uVar1) < iVar3) {
    *(ushort *)(param_1 + 0x16b0) =
         *(ushort *)(param_1 + 0x16b0) | (ushort)((DAT_1000e8ec & 0xffff) << ((byte)iVar3 & 0x1f));
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         *(undefined1 *)(param_1 + 0x16b0);
    iVar3 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar3;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar3) = *(undefined1 *)(param_1 + 0x16b1);
    iVar3 = *(int *)(param_1 + 0x16b4);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(uint *)(param_1 + 0x16b4) = iVar3 + -0x10 + uVar1;
    *(ushort *)(param_1 + 0x16b0) = (ushort)uVar2 >> (0x10U - (char)iVar3 & 0x1f);
  }
  else {
    *(ushort *)(param_1 + 0x16b0) =
         *(ushort *)(param_1 + 0x16b0) | (ushort)(DAT_1000e8ec << ((byte)iVar3 & 0x1f));
    *(uint *)(param_1 + 0x16b4) = iVar3 + uVar1;
  }
  FUN_1000a9f0(param_1);
  iVar3 = *(int *)(param_1 + 0x16b4);
  if ((*(int *)(param_1 + 0x16ac) - iVar3) + 0xb < 9) {
    if (iVar3 < 0xe) {
      *(ushort *)(param_1 + 0x16b0) =
           *(ushort *)(param_1 + 0x16b0) | (ushort)(2 << ((byte)iVar3 & 0x1f));
      *(int *)(param_1 + 0x16b4) = iVar3 + 3;
    }
    else {
      *(ushort *)(param_1 + 0x16b0) =
           *(ushort *)(param_1 + 0x16b0) | (ushort)(2 << ((byte)iVar3 & 0x1f));
      *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
           *(undefined1 *)(param_1 + 0x16b0);
      iVar3 = *(int *)(param_1 + 0x14) + 1;
      *(int *)(param_1 + 0x14) = iVar3;
      *(undefined1 *)(*(int *)(param_1 + 8) + iVar3) = *(undefined1 *)(param_1 + 0x16b1);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      iVar3 = *(int *)(param_1 + 0x16b4);
      *(int *)(param_1 + 0x16b4) = iVar3 + -0xd;
      *(ushort *)(param_1 + 0x16b0) = 2 >> (0x10U - (char)iVar3 & 0x1f);
    }
    uVar2 = DAT_1000e8ec;
    iVar3 = *(int *)(param_1 + 0x16b4);
    uVar1 = DAT_1000e8ec >> 0x10;
    if ((int)(0x10 - uVar1) < iVar3) {
      *(ushort *)(param_1 + 0x16b0) =
           *(ushort *)(param_1 + 0x16b0) | (ushort)((DAT_1000e8ec & 0xffff) << ((byte)iVar3 & 0x1f))
      ;
      *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
           *(undefined1 *)(param_1 + 0x16b0);
      iVar3 = *(int *)(param_1 + 0x14) + 1;
      *(int *)(param_1 + 0x14) = iVar3;
      *(undefined1 *)(*(int *)(param_1 + 8) + iVar3) = *(undefined1 *)(param_1 + 0x16b1);
      iVar3 = *(int *)(param_1 + 0x16b4);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      *(uint *)(param_1 + 0x16b4) = iVar3 + -0x10 + uVar1;
      *(ushort *)(param_1 + 0x16b0) = (ushort)uVar2 >> (0x10U - (char)iVar3 & 0x1f);
    }
    else {
      *(ushort *)(param_1 + 0x16b0) =
           *(ushort *)(param_1 + 0x16b0) | (ushort)(DAT_1000e8ec << ((byte)iVar3 & 0x1f));
      *(uint *)(param_1 + 0x16b4) = iVar3 + uVar1;
    }
    FUN_1000a9f0(param_1);
  }
  *(undefined4 *)(param_1 + 0x16ac) = 7;
  return;
}


