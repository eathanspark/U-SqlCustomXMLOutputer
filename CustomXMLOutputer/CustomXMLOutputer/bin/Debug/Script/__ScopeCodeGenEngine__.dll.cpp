#pragma warning( disable : 4100 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4355 )
#pragma warning( disable : 4503 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4512 )
#pragma warning( disable:  4651 )
#pragma warning( disable : 4691 )
#pragma warning( disable : 4723 )
#pragma warning( disable : 4702 )
#define SCOPE_NO_UDT
#if defined(COMPILE_NATIVE)
#include "ScopeCommonError.h"
#include "ScopeError.h"
#include "ScopeOperators.h"
#endif
#if defined(COMPILE_MANAGED)
#using <mscorlib.dll>
[assembly: System::Runtime::Versioning::TargetFrameworkAttribute(".NETFramework,Version=v4.7.2", FrameworkDisplayName = ".NET Framework, Version 4.7.2")];
#include "ScopeCommonError.h"
#include "SqlManaged.h"
#endif
#if defined(COMPILE_NATIVE)
#endif
using namespace ScopeEngine;

static ScopeEngine::CompilerSettings GetCompilerSettings()
{
    static ScopeEngine::CompilerSettings settings;
    settings.m_enableWriteBehindCacheService = false;
    settings.m_allowUserDataInException = true;
    settings.m_restrictOperatorMemorySpilling = false;
    settings.m_storeType = ScopeEngine::StoreType::LocalStore;
    settings.m_verboseRuntimeStatistic = false;
    settings.m_vertexClassifyStoreError = true;
    return settings;
};
enum OperatorUID
{
UID_Extract_0 = 1,
    UID_Extract_0_Data0 = 2,
    UID_Process_1 = 3,
    UID_Process_1_Data0 = 4,
    UID_Process_2 = 5,
    UID_Process_2_Data0 = 6,
    UID_Process_3 = 7,
    UID_Process_3_Data0 = 8,
    UID_Process_4 = 9,
    UID_Process_4_Data0 = 10,
    UID_SV1_Extract_out0 = 11,
    UID_Process_1_Prefix,
    UID_ParallelUnionAll_Extract_0
};

//namespace ScopeGeneratedClasses
//{
    // IDs representing UDTs to be used in native code
    enum UserDefinedTypeId
    {
        
    };

#if defined(COMPILE_MANAGED)
// Explicit instantiations for templated functions that are defined in managed code
#endif // defined(COMPILE_MANAGED)


    class Extract_0_Data0
    {
    public:
        FString m_name;
        FString m_dept;

        Extract_0_Data0();
        Extract_0_Data0(const Extract_0_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Extract_0_Data0(const Extract_0_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);


        static constexpr bool containsUDT = false;

        friend std::ostream& operator<<(std::ostream& os, const Extract_0_Data0& row)
        {

            ScopeEngine::OutputRowContent(
                std::string{ u8"name:string,dept:string" },
                reinterpret_cast<const char*>(&row),
                os);

            return os;
        }
    };

    static_assert(sizeof(Extract_0_Data0) == 32, "Incorrect size of row schema");

    class Process_2_Data0
    {
    public:
        FString m_dept;
        FString m_Expr_0;

        Process_2_Data0();
        Process_2_Data0(const Process_2_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_2_Data0(const Process_2_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);


        static constexpr bool containsUDT = false;

        friend std::ostream& operator<<(std::ostream& os, const Process_2_Data0& row)
        {

            ScopeEngine::OutputRowContent(
                std::string{ u8"dept:string,Expr_0:string" },
                reinterpret_cast<const char*>(&row),
                os);

            return os;
        }
    };

    static_assert(sizeof(Process_2_Data0) == 32, "Incorrect size of row schema");

    class Process_3_Data0
    {
    public:
        FString m_dept;
        ScopeArrayNative<FString> m_Expr_0;

        Process_3_Data0();
        Process_3_Data0(const Process_3_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_3_Data0(const Process_3_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);


        static constexpr bool containsUDT = false;

        friend std::ostream& operator<<(std::ostream& os, const Process_3_Data0& row)
        {

            ScopeEngine::OutputRowContent(
                std::string{ u8"dept:string,Expr_0:Microsoft.Analytics.Types.Sql.SqlArray<System.String>" },
                reinterpret_cast<const char*>(&row),
                os);

            return os;
        }
    };

    static_assert(sizeof(Process_3_Data0) == 24, "Incorrect size of row schema");

    class Process_4_Data0
    {
    public:
        FString m_dept;
        FString m_newtag;

        Process_4_Data0();
        Process_4_Data0(const Process_4_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_4_Data0(const Process_4_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);


        static constexpr bool containsUDT = false;

        friend std::ostream& operator<<(std::ostream& os, const Process_4_Data0& row)
        {

            ScopeEngine::OutputRowContent(
                std::string{ u8"dept:string,newtag:string" },
                reinterpret_cast<const char*>(&row),
                os);

            return os;
        }
    };

    static_assert(sizeof(Process_4_Data0) == 32, "Incorrect size of row schema");

#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedRow<Process_3_Data0>
    {
        cli::array<ScopeEngineManaged::ColumnOffsetId>^ ColumnOffsets()
        {
            cli::array<ScopeEngineManaged::ColumnOffsetId>^ offset = gcnew cli::array<ScopeEngineManaged::ColumnOffsetId>(2);            
            offset[0] = ColumnOffsetId(offsetof(Process_3_Data0, m_dept), T_String);
            offset[1] = ColumnOffsetId(offsetof(Process_3_Data0, m_Expr_0), T_Array);
            return offset;        
        }

        cli::array<ScopeEngineManaged::SqlIpColumn^>^ Columns(cli::array<String^>^ readOnlyColumns)
        {
            cli::array<ScopeEngineManaged::SqlIpColumn^>^ c = gcnew cli::array<ScopeEngineManaged::SqlIpColumn^>(2);
            c[0] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("dept"), System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("dept")) >= 0, /*isSystem*/false);
            c[1] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("Expr_0"), Microsoft::Analytics::Types::Sql::SqlArray<System::String^>::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("Expr_0")) >= 0, /*isSystem*/false);
            return c;        
        }

        static System::Object^ ComplexColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            if (index == 1)
            {
                r = ScopeEngine::ScopeManagedInterop::ManagedColumnGetter<ScopeArrayNative<FString>, Microsoft::Analytics::Types::Sql::SqlArray<System::String^>^>(address);
                return r;
            }
            return r;
        }

        static System::Object^ UDTColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        ManagedRow()
        {
            SqlIpSchema^ schema = gcnew SqlIpSchema(Columns(nullptr), &ManagedRow<Process_3_Data0>::ComplexColumnGetter, &ManagedRow<Process_3_Data0>::UDTColumnGetter);   
            m_row.reset(gcnew SqlIpRow(schema, ColumnOffsets(), nullptr));
        }

        SqlIpRow^ get()
        {
            return m_row.get();
        }

    private:
    
        ScopeTypedManagedHandle<SqlIpRow^> m_row;
        ManagedRow & operator=(ManagedRow &);
    };
    template<>
    struct ManagedRow<Process_4_Data0>
    {
        cli::array<ScopeEngineManaged::ColumnOffsetId>^ ColumnOffsets()
        {
            cli::array<ScopeEngineManaged::ColumnOffsetId>^ offset = gcnew cli::array<ScopeEngineManaged::ColumnOffsetId>(2);            
            offset[0] = ColumnOffsetId(offsetof(Process_4_Data0, m_dept), T_String);
            offset[1] = ColumnOffsetId(offsetof(Process_4_Data0, m_newtag), T_String);
            return offset;        
        }

        cli::array<ScopeEngineManaged::SqlIpColumn^>^ Columns(cli::array<String^>^ readOnlyColumns)
        {
            cli::array<ScopeEngineManaged::SqlIpColumn^>^ c = gcnew cli::array<ScopeEngineManaged::SqlIpColumn^>(2);
            c[0] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("dept"), System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("dept")) >= 0, /*isSystem*/false);
            c[1] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("newtag"), System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("newtag")) >= 0, /*isSystem*/false);
            return c;        
        }

        static System::Object^ ComplexColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        static System::Object^ UDTColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        ManagedRow()
        {
            SqlIpSchema^ schema = gcnew SqlIpSchema(Columns(nullptr), &ManagedRow<Process_4_Data0>::ComplexColumnGetter, &ManagedRow<Process_4_Data0>::UDTColumnGetter);   
            m_row.reset(gcnew SqlIpRow(schema, ColumnOffsets(), nullptr));
        }

        SqlIpRow^ get()
        {
            return m_row.get();
        }

    private:
    
        ScopeTypedManagedHandle<SqlIpRow^> m_row;
        ManagedRow & operator=(ManagedRow &);
    };

#endif // defined(COMPILE_MANAGED)





#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<Extract_0_Data0>
    {
    public:
        static constexpr int StreamIdRangeMax = -1;

        static bool Deserialize(BinaryInputStream * input, Extract_0_Data0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_name);
                    input->Read(row.m_dept);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_name);
                    }
                    else
                    {
                        row.m_name.SetNull();
                    }
                    if ((___masking___[0] & 4 ) != 4)
                    {
                        input->Read(row.m_dept);
                    }
                    else
                    {
                        row.m_dept.SetNull();
                    }
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<Extract_0_Data0>
    {
    public:
    
        static void SerializeHeader(BinaryOutputStream * output)
        {
            SCOPE_ASSERT(!"BinaryOutputPolicy::SerializeHeader method should not be invoked.");
        }
        
        __declspec(noinline) static void Serialize(BinaryOutputStream * output, Extract_0_Data0 & row)
        {
            SIZE_T rowStart =  output->GetOutputter().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_name.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (row.m_dept.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 4;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
            }
            else
            {
                output->Write(b);
            }
            if (!row.m_name.IsNull())
            {
                output->Write(row.m_name);
            }
            if (!row.m_dept.IsNull())
            {
                output->Write(row.m_dept);
            }
            SIZE_T rowSize =  output->GetOutputter().GetCurrentPosition() - rowStart;
            auto rowLimit = ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize();
            if (rowSize > rowLimit)
            {
                std::stringstream ss;
                ss << row << std::endl;
                throw RuntimeException(E_USER_ONDISKROW_TOO_BIG, {rowSize, rowLimit, ss.str()});
            }
        }
        static void Serialize(DummyOutputStream * output, const Extract_0_Data0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const Extract_0_Data0 & row)
            {
                STRUCTURED_DATA_ASSERT(false); // there is no partition key in the schema
            }
    };

#pragma region Schema Constructors


    INLINE Extract_0_Data0::Extract_0_Data0()
    {
    }
    INLINE Extract_0_Data0::Extract_0_Data0(const Extract_0_Data0 & c, IncrementalAllocator * alloc) :
            m_name(c.m_name, alloc),
            m_dept(c.m_dept, alloc)
    {
    }



    INLINE Process_2_Data0::Process_2_Data0()
    {
    }



    INLINE Process_3_Data0::Process_3_Data0()
    {
    }



    INLINE Process_4_Data0::Process_4_Data0()
    {
    }

#pragma endregion Schema Constructors
#pragma hdrstop


#if defined(COMPILE_INIT_SHUTDOWN)
#if defined(COMPILE_MANAGED)
extern "C" __declspec(dllexport) void __stdcall InitVertexManaged(std::string * argv, int argc)
{
#if defined(FORCEMANAGEDDATETIMESER)
    ScopeEngine::ScopeDateTime::ForceManagedSerialization = true;
#endif
    cli::array<String^>^ arguments = ScopeEngineManaged::GroupArguments(argv, argc);
    ScopeEngineManaged::InitializeScopeEngineManaged(arguments);
}

extern "C" __declspec(dllexport) void __stdcall ShutdownVertexManaged(CLRMemoryStat& stat)
{
    ScopeEngineManaged::FinalizeScopeEngineManaged(stat);
}

// < 0 indicates that server GC config will be determined at vertex startup.
// = 0 indicates that default server GC should be used, with one affinitized blocking-GC thread per core.
// > 0 specifies number of heaps/blocking threads, but with core-affinity disabled.
extern "C" __declspec(dllexport) const int UnaffinitizedServerGcHeaps { -1 };
#endif //#if defined(COMPILE_MANAGED)

#if defined(COMPILE_NATIVE)


extern "C" __declspec(dllexport) void __stdcall InitVertexNative(VertexExecutionInfo * vertexExecutionInfo)
{
#if defined(FORCEMANAGEDDATETIMESER)
    ScopeEngine::ScopeDateTime::ForceManagedSerialization = true;
#endif

    ErrorManager::GetGlobal()->EnableJSON();
    ErrorManager::GetGlobal()->EnableRowDump();
}

// Add broadcast vertex code
extern "C" __declspec(dllexport) void __stdcall SV_CopyThrough_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
{
    ScopeEngine::Configuration::Create(ET_Azure, GetCompilerSettings(), vertexExecutionInfo);
    SCOPE_ASSERT(inputCnt == 1 && outputCnt == 1);
    IOManager::CopyStream(IOManager::GetGlobal()->GetDevice(inputs[0].inputFileName), IOManager::GetGlobal()->GetDevice(outputs[0].outputFileName));
}
#endif //#if defined(COMPILE_NATIVE)


#endif //#if defined(COMPILE_INIT_SHUTDOWN)
#pragma region SV1_Extract
#if defined(COMPILE_SV1_EXTRACT) || defined(COMPILE_ALL_VERTICES)


    template<> 
    class KeyComparePolicy<Process_2_Data0,UID_Process_3>
    {
    public:
        struct KeyStruct
        {
            FString m_dept;

            KeyStruct(Process_2_Data0 & c) :
                m_dept(c.m_dept)
            {
            }

            KeyStruct(const Process_2_Data0 & c, IncrementalAllocator * alloc) :
                m_dept(const_cast<Process_2_Data0&>(c).m_dept, alloc)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_dept(c.m_dept)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_dept(const_cast<KeyStruct&>(c).m_dept, alloc)
            {
            }

            KeyStruct() :
                m_dept()
            {
            }

            friend std::ostream& operator<<(std::ostream& os, const KeyStruct& row)
            {

                ScopeEngine::OutputRowContent(
                    std::string{ u8"dept:string" },
                    reinterpret_cast<const char*>(&row),
                    os);

                return os;
            }
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_2_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_dept, key.m_dept)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_2_Data0 * n1, Process_2_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_dept, (*n2).m_dept)) != 0)
                return r;
            return r;
        }

    };



#if defined(COMPILE_NATIVE)
    template<> 
    class AggregationPolicy<typename Process_2_Data0, typename Process_3_Data0, UID_Process_3> 
    {
    public:
        
        AggregationPolicy()
            :
            m_dept_dept_FIRST("dept", "FIRST_dept_dept"),
            m_Expr_0_ARRAY_AGG("Expr_0", "ARRAY_AGG_Expr_0")
        {
        }
        
        // begin key range (copy grouping key to output)
        void BeginKey(KeyComparePolicy<Process_2_Data0,UID_Process_3>::KeyType * input, Process_3_Data0 * output)
        {
            (*output).m_dept = (*input).m_dept;
        }

        // process input row, called for each row in key range
        void AddRow(Process_2_Data0 * input)
        {
            m_dept_dept_FIRST.Add((*input).m_dept);
            m_Expr_0_ARRAY_AGG.Add((*input).m_Expr_0);
        }

        // write aggregated data, called after key is completely scanned
        void Aggregate(Process_3_Data0 * output)
        {
            m_dept_dept_FIRST.Aggregate(&(*output).m_dept);
            m_Expr_0_ARRAY_AGG.Aggregate(&(*output).m_Expr_0);
        }

        // write aggregated data
        void GetValue(Process_3_Data0 * output)
        {
            m_dept_dept_FIRST.GetValue(&(*output).m_dept);
            throw RuntimeException(E_SYSTEM_INTERNAL_ERROR, "ArrayaggHandler::OnGetValue() not implemented.");
        }

        // reset for new key
        void Reset()
        {
            m_dept_dept_FIRST.Reset();
            throw RuntimeException(E_SYSTEM_INTERNAL_ERROR, "ArrayaggHandler::OnReset() not implemented.");
        }

        // store statistics
		__declspec(noinline)
        void WriteRuntimeStats(TreeNode & root) const
        {
            m_dept_dept_FIRST.WriteRuntimeStats(root);
            m_Expr_0_ARRAY_AGG.WriteRuntimeStats(root);
        }

        // get operator resource requirements
        ScopeEngine::OperatorRequirements GetOperatorRequirements()
        {
            ScopeEngine::OperatorRequirements result;
            result.Add(m_dept_dept_FIRST.GetOperatorRequirements());
            result.Add(m_Expr_0_ARRAY_AGG.GetOperatorRequirements());
            return result;
        }

    private:
        Aggregate_FIRST<FString> m_dept_dept_FIRST;
        Aggregate_ARRAY_AGG<FString> m_Expr_0_ARRAY_AGG;
    };
#endif // defined(COMPILE_NATIVE)


    template<> 
    class KeyComparePolicy<Extract_0_Data0,UID_Process_1>
    {
    public:
        struct KeyStruct
        {
            FString m_dept;

            KeyStruct(Extract_0_Data0 & c) :
                m_dept(c.m_dept)
            {
            }

            KeyStruct(const Extract_0_Data0 & c, IncrementalAllocator * alloc) :
                m_dept(const_cast<Extract_0_Data0&>(c).m_dept, alloc)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_dept(c.m_dept)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_dept(const_cast<KeyStruct&>(c).m_dept, alloc)
            {
            }

            KeyStruct() :
                m_dept()
            {
            }

            friend std::ostream& operator<<(std::ostream& os, const KeyStruct& row)
            {

                ScopeEngine::OutputRowContent(
                    std::string{ u8"dept:string" },
                    reinterpret_cast<const char*>(&row),
                    os);

                return os;
            }
        };

        typedef KeyStruct KeyType;

        static int Compare(Extract_0_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_dept, key.m_dept)) != 0)
                return r;
            return r;
        }

        static int Compare(Extract_0_Data0 * n1, Extract_0_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_dept, (*n2).m_dept)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(Extract_0_Data0 * p, int depth)
        {
            if (depth < 1 && (*p).m_dept.IsNull())
            {
                // Special case for "null" string
                return (__int64)(256);
            }
            else if (depth == (int) (*p).m_dept.size())
            {
                // Special case for end-of-string (field separator)
                return (__int64)(-1);
            }
            else if (depth < (int) (*p).m_dept.size())
            {
                // For string convert to unsigned char first. Otherwise, unicode will have negative value which will have different order than binary comparison.
                return (__int64)((unsigned char)((*p).m_dept.buffer()[depth]));
            }

            depth -= (int) ((*p).m_dept.size() + 1);


            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(Extract_0_Data0 * p, int depth)
        {
            depth -= (int) ((*p).m_dept.size() + 1);
            if (depth < 0)
                return false;
            return true;
        }
    };



    static const char * StringTable_Process_2 [] =
    {
        "dept",
        "(name)",
        "\"*** After Last Expression ***\"",
    };

    template<>
    class RowTransformPolicy<Extract_0_Data0, Process_2_Data0, UID_Process_2>
    {
    public:
        static bool FilterTransformRow(Extract_0_Data0 & input, Process_2_Data0 & output, IncrementalAllocator * alloc)
        {
            int exceptionIndex = 0;
            try
            {
                    output.m_dept = input.m_dept;
                    exceptionIndex++;
                    output.m_Expr_0 = (input.m_name);
                    exceptionIndex++;
                    return true;
            }
            catch(...)
            {
                std::throw_with_nested(RuntimeException(E_USER_EXPRESSION_ERROR, StringTable_Process_2[exceptionIndex]));
            }
            }

        static void InitializeStatics(IncrementalAllocator *) {}

        // get operator resource requirements
        static ScopeEngine::OperatorRequirements GetOperatorRequirements()
        {
            return ScopeEngine::OperatorRequirements().AddMemoryInRows(1, 1);
        }
    };




    template<>
    class RowTransformPolicy<Process_3_Data0, Process_4_Data0, UID_Process_4>
    {
    public:
        static bool FilterTransformRow(Process_3_Data0 & input, Process_4_Data0 & output, IncrementalAllocator * alloc)
        {
           output.m_dept = input.m_dept;
return true;
    }

        static void InitializeStatics(IncrementalAllocator *) {}

        // get operator resource requirements
        static ScopeEngine::OperatorRequirements GetOperatorRequirements()
        {
            return ScopeEngine::OperatorRequirements().AddMemoryInRows(1, 1);
        }
    };




#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)


#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedUDO<UID_Process_4>
    {
        typedef Microsoft::Analytics::Interfaces::IProcessor UDO;

        ManagedUDO(std::string * argv, int argc)
        {
            try
            {
                m_udo.reset(___Scope_Generated_Classes___::__OperatorFactory__::Create_Process_4());
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(std::wstring{})));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::ExceptionHelper::WrapException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Process_4, "Constructor", ex);
                throw;
            }
        }


        UDO^ get()
        {
            return m_udo.get();
        }

        Generic::List<String^>^ args()
        {
            return m_args.get();
        }
        cli::array<String^>^ ReadOnlyColumns_Output()
        {
            return nullptr;
        }

        cli::array<String^>^ ReadOnlyColumns_Input()
        {
            return nullptr;
        }

    private:
        ScopeTypedManagedHandle<UDO^> m_udo;
        ScopeTypedManagedHandle<Generic::List<String^>^> m_args;
        ManagedUDO & operator=(ManagedUDO &);
    };
    template<>
    class InteropToNativeRowPolicy<Process_4_Data0, UID_Process_4>
    {
    public:
        static void Marshal(ScopeEngineManaged::SqlIpRow^ managedRow, Process_4_Data0& nativeRow, IncrementalAllocator* alloc)
        {
            ScopeEngine::ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_newtag, managedRow->GetInternal<System::String^>(1), alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)


#if defined(COMPILE_NATIVE)
    template<> 
    class TextExtractPolicy<Extract_0_Data0, UID_Extract_0>
    {
    public:
        static constexpr int StreamIdRangeMax = -1;

        static bool Deserialize(TextInputStream<TextInputStreamTraitsConst<',', '\0', '\0', false, true, UTF8, true, false, false, 1, CharFormat_uint16, false, false>, CosmosInput> * input, Extract_0_Data0 & row)
        {
            for(;;)
            {
                try
                {
                    // When we start a new row we always skip all empty lines first.
                    if (!input->StartRow())
                    {
                        return false;
                    }

                    input->SkipColumn();
                    input->Read(row.m_name);
                    input->Read(row.m_dept);
                    input->SkipColumn();
                    input->SkipColumn();

                    if (!input->EndRow())
                    {
                        // Too many columns in row - report error.
                        throw ScopeStreamExceptionWithEvidence(
                            E_EXTRACT_ROW_DELIMITER_EXPECTED,
                            { input->CurrentLineNumber(), input->CurrentField() },
                            EvidenceFormatter::FormatText(
                                input->GetBufferStart(),
                                input->GetReadPosition(),
                                input->GetBufferEnd(),
                                input->rowDelimiter,
                                input->delimiter));
                    }
                    return true;
                }
                catch (const ExtractInvalidCharacterException& e)
                {
                    std::throw_with_nested(ExtractException(
                        E_EXTRACT_ENCODING_ERROR,
                        { input->GetEncodedGlobalFileOffset() + e.GetErrorOffset(), input->CurrentLineNumber() },
                        false));
                }
                catch (const TextConversionException& e)
                {
                    std::throw_with_nested(ExtractException(
                        E_EXTRACT_ROW_ERROR,
                        { e.GetRowNumber(), e.GetColumnIndex(), GetColumnName(e.GetColumnIndex()) },
                        false));
                }
                catch (const RuntimeMemoryException& /* e */)
                {
                    std::throw_with_nested(ScopeStreamExceptionWithEvidence(
                        E_EXTRACT_ROW_TOO_LONG,
                        { input->CurrentLineNumber(), Configuration::GetGlobal().GetMaxInMemoryRowSize() },
                        EvidenceFormatter::FormatText(
                            input->GetBufferStart(),
                            input->GetReadPosition(),
                            input->GetBufferEnd(),
                            input->rowDelimiter,
                            input->delimiter)));
                }
                catch (const ScopeStreamException& e)
                {
                    switch(e.Error())
                    {
                    // Following error will terminate read
                    case ScopeStreamException::EndOfFile:
                    case ScopeStreamException::BadDevice:
                        return false;

                    // Bad rows throw exception
                    case ScopeStreamException::UnexpectedNewLine:
                        // Wrong number of columns in row - report error
                        // At this point, line number is increased to point at the next line. Subtract 1 to get line
                        // number of the offending row.
                        throw ScopeStreamExceptionWithEvidence(
                            E_EXTRACT_UNEXPECTED_ROW_DELIMITER,
                            { input->CurrentLineNumber() - 1, 5, input->CurrentField() },
                            EvidenceFormatter::FormatText(
                                input->GetBufferStart(),
                                input->GetReadPosition(),
                                input->GetBufferEnd(),
                                input->rowDelimiter,
                                input->delimiter));

                    // All exceptions should be handled above.
                    default:
                        SCOPE_ASSERT(false);
                    }
                }
            }
        }
        static const char* GetColumnName(std::size_t columnIndex)
        {
            static const std::array<const char*, 6> c_columnNames =
            {
                "sn",
                "name",
                "dept",
                "rank",
                "sal",
                "*** END ***"
            };

            auto idx = std::min(columnIndex, c_columnNames.size() - 1);
            return c_columnNames[idx];
        }
    };

#endif // defined(COMPILE_NATIVE)



#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)


    template<>
    class RowTransformPolicy<Process_2_Data0, Process_3_Data0, UID_Process_3>
    {
    public:
        static bool FilterTransformRow(Process_2_Data0 & input, Process_3_Data0 & output, IncrementalAllocator * alloc)
        {
    }

        static void InitializeStatics(IncrementalAllocator *) {}

        // get operator resource requirements
        static ScopeEngine::OperatorRequirements GetOperatorRequirements()
        {
            return ScopeEngine::OperatorRequirements().AddMemoryInRows(1, 1);
        }
    };




#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)


#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedUDO<UID_SV1_Extract_out0>
    {
        typedef Microsoft::Analytics::Interfaces::IOutputter UDO;

        ManagedUDO(std::string * argv, int argc)
        {
            try
            {
                m_udo.reset(___Scope_Generated_Classes___::__OperatorFactory__::Create_SV1_Extract_out0());
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(std::wstring{})));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::ExceptionHelper::WrapException(___Scope_Generated_Classes___::__OperatorFactory__::Name_SV1_Extract_out0, "Constructor", ex);
                throw;
            }
        }


        UDO^ get()
        {
            return m_udo.get();
        }

        Generic::List<String^>^ args()
        {
            return m_args.get();
        }
        cli::array<String^>^ ReadOnlyColumns_Output()
        {
            return nullptr;
        }

        cli::array<String^>^ ReadOnlyColumns_Input()
        {
            return nullptr;
        }

    private:
        ScopeTypedManagedHandle<UDO^> m_udo;
        ScopeTypedManagedHandle<Generic::List<String^>^> m_args;
        ManagedUDO & operator=(ManagedUDO &);
    };
#endif // defined(COMPILE_MANAGED)



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV1_Extract_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        ScopeEngine::CheckCpuSupportsInstructions();
#endif

        ScopeEngine::Configuration::Create(ET_Azure, GetCompilerSettings(), vertexExecutionInfo);
        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        constexpr bool IsNativeOnlyVertex = false;
        // If we have more than one input, we will random shuffle it
        if (inputCnt - 0 > 1)
        {
            ScopeRandom scopeRandom((int)vertexExecutionInfo->m_vertexId);
            auto lambda = [&scopeRandom](std::ptrdiff_t max) { return (scopeRandom.Next() % max + max) % max;}; // scopeRandom.Next() % max could be negative value
            random_shuffle(&inputs[0], inputs + inputCnt - 0, lambda ); 
            // move all empty inputs to the end of extractor array so we can always get metadata from the first input
            std::stable_partition(&inputs[0], inputs + inputCnt - 0, [](const InputFileInfo& input){ return input.length != 0; });
        }
        // Define extractor type and construct objects
        // 
        typedef Extractor<Extract_0_Data0, TextExtractPolicy<Extract_0_Data0, UID_Extract_0>, TextInputStream<TextInputStreamTraitsConst<',', '\0', '\0', false, true, UTF8, true, false, false, 1, CharFormat_uint16, false, false>, CosmosInput>> ExtractorType1_SV1_Extr;
        unique_ptr<unique_ptr<ExtractorType1_SV1_Extr>[]> extractor_0_array(new unique_ptr<ExtractorType1_SV1_Extr>[inputCnt - 0]);
        
        for (int i = 0; i < inputCnt; i++)
        {
            // 
            extractor_0_array[i - 0].reset(new ExtractorType1_SV1_Extr(inputs[i], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, InputStreamParameters(',', '\0', '\0', static_cast<const char*>(__nullptr), false, true, UTF8, true, false, 1, CharFormat_uint16), UID_Extract_0));
        }

    ExtractorType1_SV1_Extr ** extractor_0 = (ExtractorType1_SV1_Extr **)extractor_0_array.get();

        
        ULONG extractor_0_count = (ULONG) inputCnt - 0;
        // Merge streams N->1
        typedef ParallelUnionAll<ExtractorType1_SV1_Extr, Extract_0_Data0, IsNativeOnlyVertex> UnionAllType_Extract_0_Process_1_connector;
        unique_ptr<UnionAllType_Extract_0_Process_1_connector> unionall_Extract_0_Process_1_connector_ptr(new UnionAllType_Extract_0_Process_1_connector(extractor_0,extractor_0_count,6,41943040,UID_ParallelUnionAll_Extract_0));
        UnionAllType_Extract_0_Process_1_connector * unionall_Extract_0_Process_1_connector = unionall_Extract_0_Process_1_connector_ptr.get();
        ULONG unionall_Extract_0_Process_1_connector_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Extract_0_Data0>> delegate_unionall_Extract_0_Process_1_connector_ptr (new OperatorDelegate<Extract_0_Data0>(OperatorDelegate<Extract_0_Data0>::FromOperator(unionall_Extract_0_Process_1_connector)));
        OperatorDelegate<Extract_0_Data0> * delegate_unionall_Extract_0_Process_1_connector = delegate_unionall_Extract_0_Process_1_connector_ptr.get();
        ULONG delegate_unionall_Extract_0_Process_1_connector_count = 1;
        // Define sorter type
        typedef Sorter<Extract_0_Data0> SorterType_Process_1;
        // Construct operator and initialize it.
        unique_ptr<SorterType_Process_1> sorter_Process_1_ptr (new SorterType_Process_1(delegate_unionall_Extract_0_Process_1_connector, &MKQSort<Extract_0_Data0>::Sort<KeyComparePolicy<Extract_0_Data0, UID_Process_1>, (sizeof(Extract_0_Data0)<=CACHELINE_SIZE)>, ScopeLoserTreeDelegate<Extract_0_Data0>::CreateDelegate<UID_Process_1>(), false, 4450025472 /*memoryQuota*/, UID_Process_1));
        SorterType_Process_1 * sorter_Process_1 = sorter_Process_1_ptr.get();
        ULONG sorter_Process_1_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<SorterType_Process_1, Extract_0_Data0, Process_2_Data0, UID_Process_2> FilterTransformerType_Process_2;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_2> filterTransformer_Process_2_ptr (new FilterTransformerType_Process_2(sorter_Process_1, UID_Process_2));
        FilterTransformerType_Process_2 * filterTransformer_Process_2 = filterTransformer_Process_2_ptr.get();
        ULONG filterTransformer_Process_2_count = 1;
        // Define stream aggregator type
        typedef StreamAggregator<FilterTransformerType_Process_2, Process_2_Data0, Process_3_Data0, UID_Process_3> StreamAggregatorType_Process_3;
        // Construct operator and initialize it.
        unique_ptr<StreamAggregatorType_Process_3> streamAggregator_Process_3_ptr (new StreamAggregatorType_Process_3(filterTransformer_Process_2, false, UID_Process_3));
        StreamAggregatorType_Process_3 * streamAggregator_Process_3 = streamAggregator_Process_3_ptr.get();
        ULONG streamAggregator_Process_3_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_3_Data0>> delegate_streamAggregator_Process_3_ptr (new OperatorDelegate<Process_3_Data0>(OperatorDelegate<Process_3_Data0>::FromOperator(streamAggregator_Process_3)));
        OperatorDelegate<Process_3_Data0> * delegate_streamAggregator_Process_3 = delegate_streamAggregator_Process_3_ptr.get();
        ULONG delegate_streamAggregator_Process_3_count = 1;
        // Define the type of the operator
        typedef ScopeProcessor<Process_3_Data0, Process_4_Data0> ProcessorType_Process_4;
        // Construct operator and initialize it.
        unique_ptr<ProcessorType_Process_4> processor_Process_4_ptr (new ProcessorType_Process_4(ScopeProcessorManagedFactory::MakeSqlIp<Process_3_Data0,Process_4_Data0,UID_Process_4>(delegate_streamAggregator_Process_3), delegate_streamAggregator_Process_3, UID_Process_4));
        ProcessorType_Process_4 * processor_Process_4 = processor_Process_4_ptr.get();
        ULONG processor_Process_4_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_4_Data0>> delegate_processor_Process_4_ptr (new OperatorDelegate<Process_4_Data0>(OperatorDelegate<Process_4_Data0>::FromOperator(processor_Process_4)));
        OperatorDelegate<Process_4_Data0> * delegate_processor_Process_4 = delegate_processor_Process_4_ptr.get();
        ULONG delegate_processor_Process_4_count = 1;
        // Define outputter type
        typedef ScopeOutputter<CosmosOutput, Process_4_Data0> OutputterType2_SV1_Extr;
        // Construct operator and initialize it
        unique_ptr<OutputterType2_SV1_Extr> outputter_SV1_Extract_out0_ptr(new OutputterType2_SV1_Extr(delegate_processor_Process_4, outputs[0].outputFileName, x_outputBufSize, x_outputBufCnt, ScopeOutputterManagedFactory::MakeSqlIp<CosmosOutput, Process_4_Data0, UID_SV1_Extract_out0, 0>(delegate_processor_Process_4, false, false), UID_SV1_Extract_out0));
        OutputterType2_SV1_Extr * outputter_SV1_Extract_out0 = outputter_SV1_Extract_out0_ptr.get();
        // Create timer to automatically dump statistics available at the time, when approaching max permitted time for vertex execution
        auto dumpStatsTimer{ ScopeEngine::CreateDumpStatsTimer(vertexExecutionInfo->m_updateStatusThresholdToAutoDumpStatistics, *outputter_SV1_Extract_out0) };

        try
        {
            // Init operator chain
            outputter_SV1_Extract_out0->InitOperatorPipeline();

            // Execute the whole vertex by calling the GetNextRow on top operator
            Process_4_Data0 row;
            outputter_SV1_Extract_out0->GetNextRow(row);

            // Close operator chain
            outputter_SV1_Extract_out0->Close();
        }
        catch (const ExceptionWithStack& ex)
        {
            std::cout << "Caught exception: " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputter_SV1_Extract_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
template ScopeProcessorManaged<Process_3_Data0, Process_4_Data0> * ScopeEngine::ScopeProcessorManagedFactory::MakeSqlIp<Process_3_Data0, Process_4_Data0, UID_Process_4>(OperatorDelegate<Process_3_Data0>*);
template ScopeOutputterManaged<CosmosOutput, Process_4_Data0> * ScopeEngine::ScopeOutputterManagedFactory::MakeSqlIp<CosmosOutput, Process_4_Data0, UID_SV1_Extract_out0, 0>(OperatorDelegate<Process_4_Data0>*, bool, bool);
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV1_Extract
#if defined(COMPILE_SHARED_DATA) || defined(COMPILE_ALL_VERTICES)
#if defined(COMPILE_NATIVE)
#endif // COMPILE_NATIVE
#endif //#if defined(COMPILE_SHARED_DATA) || defined(COMPILE_ALL_VERTICES)
#if defined(COMPILE_SV1_EXTRACT) || defined(COMPILE_ALL_VERTICES)
#if defined(COMPILE_NATIVE)








#endif // COMPILE_NATIVE
#endif //#if defined(COMPILE_SV1_EXTRACT) || defined(COMPILE_ALL_VERTICES)
// Empty footer
