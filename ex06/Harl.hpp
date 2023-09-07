#include <string>

class	Harl
{
	private:
		void 	debug( void );
		void 	info( void );
		void 	warning( void );
		void 	error( void );
		void	complain_levels(int level);
	public:
		Harl(void);
		~Harl(void);
		void complain( std::string level );
};