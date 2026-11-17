/* FUN_00870730 - 0x00870730 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_00870730(void)

{
  LPCSTR pCVar1;
  LSTATUS LVar2;
  bool bVar3;
  DWORD DVar4;
  DWORD dwType;
  REGSAM samDesired;
  BYTE *lpData;
  HKEY *phkResult;
  DWORD cbData;
  HKEY local_4;
  
  phkResult = &local_4;
  samDesired = 0xf003f;
  DVar4 = 0;
  bVar3 = false;
  pCVar1 = (LPCSTR)FUN_00875080(&DAT_0096ed00);
  DVar4 = RegOpenKeyExA((HKEY)0x80000002,pCVar1,DVar4,samDesired,phkResult);
  if (DVar4 == 0) {
    lpData = &stack0x00000004;
    cbData = 4;
    dwType = 4;
    pCVar1 = (LPCSTR)FUN_00875080(&DAT_0096ece8);
    LVar2 = RegSetValueExA(local_4,pCVar1,DVar4,dwType,lpData,cbData);
    bVar3 = LVar2 == 0;
    RegCloseKey(local_4);
  }
  return bVar3;
}


