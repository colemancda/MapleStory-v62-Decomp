/* FUN_00874f70 - 0x00874f70 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined * FUN_00874f70(LPCSTR param_1)

{
  int iVar1;
  char cVar2;
  LPCSTR pCVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  pCVar3 = param_1;
  iVar4 = lstrlenA(param_1);
  if (iVar4 == 0) {
    return &DAT_0097fd50;
  }
  uVar5 = (uint)param_1 & 0xff;
  DAT_0097fd51 = (char)param_1;
  DAT_0097fd50 = 1;
  param_1._0_1_ = DAT_0097fd51 * '\x03' + 0x65;
  iVar6 = 4;
  iVar1 = (uVar5 * 3 + 1) * 3;
  cVar2 = (char)iVar1;
  if (0 < iVar4) {
    do {
      iVar1 = (iVar1 + 1) * 3;
      (&DAT_0097fd50)[iVar6] = pCVar3[iVar6 + -4] ^ (char)iVar1 + 0x65U;
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  (&DAT_0097fd50)[iVar6] = 0;
  DAT_0097fd52 = (byte)((uint)(iVar6 + -4) >> 8) ^ (byte)param_1;
  DAT_0097fd53 = cVar2 + 0x65U ^ (byte)(iVar6 + -4);
  return &DAT_0097fd50;
}


