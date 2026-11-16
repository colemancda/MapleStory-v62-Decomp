/* DllGetClassObject - 0x50c02b4f in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


HRESULT DllGetClassObject(IID *rclsid,IID *riid,LPVOID *ppv)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x2b4f  2  DllGetClassObject */
  piVar2 = (int *)&DAT_50c14850;
  iVar1 = wcscmp((wchar_t *)rclsid,u_Property_50c1732c);
  if (iVar1 == 0) {
    piVar2 = (int *)&DAT_50c172f8;
  }
  else {
    iVar1 = wcscmp((wchar_t *)rclsid,u_List_50c17320);
    if (iVar1 == 0) {
      piVar2 = (int *)&DAT_50c172e8;
    }
    else {
      iVar1 = wcscmp((wchar_t *)rclsid,(wchar_t *)&DAT_50c17318);
      if (iVar1 == 0) {
        piVar2 = (int *)&DAT_50c172d8;
      }
    }
  }
  piVar2 = FUN_50c048d5((int *)&DAT_50c1ca20,piVar2,riid,(int *)ppv);
  return (HRESULT)piVar2;
}


